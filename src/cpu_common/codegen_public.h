/*
 * VARCem	Virtual ARchaeological Computer EMulator.
 *		An emulator of (mostly) x86-based PC systems and devices,
 *		using the ISA,EISA,VLB,MCA  and PCI system buses, roughly
 *		spanning the era between 1981 and 1995.
 *
 *		This file is part of the VARCem Project.
 *
 *		Definitions for the code generator.
 *
 * Version:	@(#)codegen_public.h	1.0.0	2020/01/27
 *
 * Authors:	Miran Grca, <mgrca8@gmail.com>
 *
 *		Copyright 2020 Miran Grca.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free  Software  Foundation; either  version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is  distributed in the hope that it will be useful, but
 * WITHOUT   ANY  WARRANTY;  without  even   the  implied  warranty  of
 * MERCHANTABILITY  or FITNESS  FOR A PARTICULAR  PURPOSE. See  the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the:
 *
 *   Free Software Foundation, Inc.
 *   59 Temple Place - Suite 330
 *   Boston, MA 02111-1307
 *   USA.
 */
#ifndef _CODEGEN_PUBLIC_H_
#define _CODEGEN_PUBLIC_H_

#ifndef USE_NEW_DYNAREC
#define PAGE_MASK_INDEX_MASK 3
#define PAGE_MASK_INDEX_SHIFT 10
#define PAGE_MASK_SHIFT 4
#else
#define PAGE_MASK_SHIFT 6
#endif
#define PAGE_MASK_MASK 63

#ifdef USE_NEW_DYNAREC
#define BLOCK_PC_INVALID 0xffffffff
#define BLOCK_INVALID 0
#endif


extern void	codegen_init();
#ifdef USE_NEW_DYNAREC
extern void	codegen_close();
#endif
extern void	codegen_flush();


/*Current physical page of block being recompiled. -1 if no recompilation taking place */
extern uint32_t	recomp_page;
extern int codegen_in_recompile;

#endif
