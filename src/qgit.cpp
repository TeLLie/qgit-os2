/*
	Author: Marco Costalba (C) 2005-2007
	Author: Sebastian Pipping (C) 2021

	Copyright: See COPYING file that comes with this distribution

*/
#include <QCommandLineParser>
#include <QSettings>
#include "config.h" // defines PACKAGE_VERSION
#include "common.h"
#include "mainimpl.h"

#if defined(_MSC_VER) && defined(NDEBUG)
	#pragma comment(linker,"/entry:mainCRTStartup")
	#pragma comment(linker,"/subsystem:windows")
#endif

using namespace QGit;

int main(int argc, char* argv[]) {

	QApplication app(argc, argv);
	app.setAttribute(Qt::AA_UseHighDpiPixmaps, true);
	QCoreApplication::setOrganizationName(ORG_KEY);
	QCoreApplication::setApplicationName(APP_KEY);

	QCommandLineParser parser;
	QCoreApplication::setApplicationVersion(PACKAGE_VERSION);
	parser.addHelpOption();
	parser.addVersionOption();
	parser.setApplicationDescription("QGit, a Git GUI viewer");
	parser.addPositionalArgument("git-log-args",
		"Arguments forwarded to \"git log\"; for example:\n"
		"   qgit --no-merges\n"
		"   qgit v2.6.18.. include/scsi \\\n"
		"                  drivers/scsi\n"
		"   qgit --since=\"2 weeks ago\" -- kernel/\n"
		"   qgit -r --name-status release..test\n"
		"See \"man git-log\" for details.",
		"[git-log-args]");

	parser.parse(app.arguments());

	if (parser.isSet("help")
			|| parser.isSet("help-all")
			|| parser.isSet("version")) {
		QCoreApplication::setApplicationName("QGit");
		parser.process(app.arguments());  // exits the process
	}

	/* On Windows msysgit exec directory is set up
	 * during installation so to always find git.exe
	 * also if not in PATH
	 */
	QSettings set;
	GIT_DIR = set.value(GIT_DIR_KEY).toString();

	initMimePix();

	MainImpl* mainWin = new MainImpl;
	mainWin->show();
	QObject::connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
	bool ret = app.exec();

	freeMimePix();
	return ret;
}
