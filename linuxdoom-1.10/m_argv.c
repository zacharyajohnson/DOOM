// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// $Log:$
//
// DESCRIPTION:
//
//-----------------------------------------------------------------------------

static const char
rcsid[] = "$Id: m_argv.c,v 1.1 1997/02/03 22:45:10 b1 Exp $";


#include <string.h>

// Stores the arg count passed into the program
int		myargc;

// Stores an array of arg values passed into
// the program
char**		myargv;


// M_CheckParm
// Checks for the given parameter
// in the program's command line arguments
// array(myargv).
// Returns the argument number in the array
// (1 to argc-1)
// or 0 if not present in the array
int M_CheckParm (char *check)
{
    int		i;

    // Starts at one since that
    // is the first possible command line argument
    // passed in
    for (i = 1;i<myargc;i++)
    {
        // Case insensitive comparison
	if ( !strcasecmp(check, myargv[i]) )
	    return i;
    }

    return 0;
}




