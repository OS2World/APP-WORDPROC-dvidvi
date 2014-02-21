The source file dvidvi.c says:

 *    The original program is by Tomas Rokicki (version 0.5) but it was
 *    modified and improved by Esteban ZIMANYI ezimanyi@rc1.vub.ac.be
 *    to give version 1.0.
 *
 *    This version has been tested for the IBM PC and compatibles under
 *    compilers Turbo C 2.0 and Microsoft C 6.0.

but stdlib.h needed to be included. Also, there appears to be an error 
in one of the '#ifdef SHORTINT' checks--look at patches.os2. Finally, 
OS/2 and MSDOS need stdout set to O_BINARY (RAW) mode.


Files in this archive:
  dvidvbnd.exe		OS/2 and MSDOS bound executable
  dvidvi.def		definition file for link
  dvidvi.exe		OS/2 executable
  makefile.msc		makefile for MSC 6.00A
  patches.os2		context diff's
  README.OS2		this file


Darrel Hankerson hank@ducvax.auburn.edu
29-August-92

