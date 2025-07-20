===================================================================================================
**** If you like the programs i'm porting and you want to donate to me, see the following URL: ****
**** http://www.bitwiseworks.com/shop/index.php?id_product=38&controller=product& id_lang=1    ****
****             Or send directly to me using PayPal: tellie@elbertpol.nl                      ****
****                All the money you send will go to the QT5 project                          ****
===================================================================================================

qgit v2.12   

 CONTENTS OF THIS FILE
 =====================

1. INTRODUCTION

2. REQUIREMENTS

3. INSTALLATION

4. LICENSE, COPYRIGHT, DISCLAIMER

5. CONTACT

6. CREDITS

7. SUPPORT AND DONATIONS

8. HISTORY

9. RESTRICTIONS


1. INTRODUCTION
===============

Welcome to qgit v2.12 port for OS/2 and eComStation.

With qgit you will be able to browse revisions history, view patch content
and changed files, graphically following different development branches.


2. REQUIREMENTS
===============
  The following requirements can be installed either by rpm or by zip files  
  except Extended System Tray widget which is currently available as zip only.
  

  RPM Installation (preferred):
  ============================
  klibc
  -----
   1. yum install libc
  
  
  --------
   1. yum install libgcc1
   2. yum install libssp
   3. yum install libstdc++6 libstdc++
   4. yum install libsupc++6 libsupc++
   5. yum install libgcc-fwd

  Qt5 dll
  -------
   1. yum install Qt5Core Qt5Gui Qt5Wdgt

    
3. INSTALLATION
===============

  qgit
  ---
  1. It's create a directory for qgit
  2. It's create a WPS object for qgit.exe.
  

4. LICENSE, COPYRIGHT, DISCLAIMER
=================================

(C) 2007-2025 https://github.com/tibirna/qgit

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


5. CONTACT
==========

if you find a bug, then add a ticket to the trac at http://svn.netlabs.org/qtapps

Only bug reports with a reproducable bug are accepted. :-)



6. CREDITS
==========

The port was done by: Elbert Pol aka TeLLie

Thanks go to:

  * Dmitry A. Kuminov
  * Silvan Scherrer

They either helped me when I had some nasty questions or did some testing for me.


7. SUPPORT AND DONATIONS
========================

qgit is based on volunteer work. If you would like to support further
development, you can do so in one of the following ways:


  * Donate to the Qt5 project

  * While working on Qt 5 for OS/2, we are glad to know that our work is being partly sponsored by the grateful OS/2 community.
    Given the scale of this project and all other OS/2 projects that we work on, and also the fact that the OS/2 world has limited financial resources nowadays, every penny counts.
    We need to pay our full-time and part-time developers for their hard work. So any contribution is highly appreciated!
    To do so, please visit our online shop where you can buy development units of a preferred value.
    https://www.bitwiseworks.com/shop/index.php

  * Contribute to the project: Besides actual development, this also includes maintaining the documentation and the project web site as well as help for users.

8. HISTORY
==========
Compiled now with Qt v5.15.2

Changelog:

Update to the new upstream version 2.12

Stay tuned.