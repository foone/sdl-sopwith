// Emacs style mode select -*- C++ -*-
//---------------------------------------------------------------------------
//
// $Id: $
//
// Copyright(C) 1984-2000 David L. Clark
// Copyright(C) 2001 Simon Howard
//
// All rights reserved except as specified in the file license.txt.
// Distribution of this file without the license.txt file accompanying
// is prohibited.
//
//---------------------------------------------------------------------------

#ifndef __SWGRPHA_H__
#define __SWGRPHA_H__

#include "sw.h"

extern char *vidram;

extern void swdisp();
extern void swground();
extern void swputsym(int x, int y, OBJECTS *ob);
//extern char    fill[];

extern void swinitgrph();
extern void swshutdowngrph();

extern void colorscreen(int color);

extern void setadisp();
extern void clrdispa();

extern void setvdisp();
extern void clrdispv();

extern void movedisp();

#endif


//---------------------------------------------------------------------------
//
// $Log: $
//
// sdh 27/07/2002: remove clrcol and swputcol
// sdh 27/03/2002: remove swpntcol and swpntsym
// sdh 21/10/2001: added cvs tags
// sdh 19/10/2001: added header
//
//---------------------------------------------------------------------------

