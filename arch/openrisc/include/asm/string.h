/*
 * OpenRISC Linux
 *
 * Linux architectural port borrowing liberally from similar works of
 * others.  All original copyrights apply as per the original source
 * declaration.
 *
 * OpenRISC implementation:
 * Copyright (C) 2003 Matjaz Breskvar <phoenix@bsemi.com>
 * Copyright (C) 2010-2011 Jonas Bonn <jonas@southpole.se>
 * et al.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __ASM_OPENRISC_STRING_H
#define __ASM_OPENRISC_STRING_H

/* TODO: Implement optimized version of memcpy and memset */

#if 0

#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *, const void *, size_t);

#define __HAVE_ARCH_MEMSET
extern void *memset(void *, int, size_t);

#endif

#endif