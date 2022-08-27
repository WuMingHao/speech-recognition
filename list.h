/*
 * Copyright 2012, 2013 Fabian Ebner
 * The program is licensed under the GPL version 3 or (at your opinion) any later version, see the file COPYING for details.
 */

#ifndef __LIST_H__
#define __LIST_H__

#include "frame.h"


typedef
	struct _word
	{
		mfcc_frame *frames;
		unsigned int n;
		char *name;
		struct _word *next;
	} word;

void new_word(mfcc_frame *frames, unsigned int n, char *bezeichnung);
int get_list(word *head);

#endif
