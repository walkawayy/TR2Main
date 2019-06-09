/*
 * Copyright (c) 2017-2019 Michael Chaban. All rights reserved.
 * Original game is written by Core Design Ltd. in 1997.
 * Lara Croft and Tomb Raider are trademarks of Square Enix Ltd.
 *
 * This file is part of TR2Main.
 *
 * TR2Main is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TR2Main is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TR2Main.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COLLIDE_H_INCLUDED
#define COLLIDE_H_INCLUDED

#include "global/types.h"

/*
 * Function list
 */
//	0x004128D0:		GetCollisionInfo
//	0x00412F90:		FindGridShift
//	0x00412FC0:		CollideStaticObjects
//	0x004133B0:		GetNearByRooms
//	0x00413480:		GetNewRoom
//	0x004134E0:		ShiftItem
//	0x00413520:		UpdateLaraRoom
//	0x00413580:		GetTiltType
//	0x00413620:		LaraBaddieCollision
//	0x004137C0:		EffectSpaz

#define CreatureCollision ((void(__cdecl*)(__int16, ITEM_INFO *, COLL_INFO *)) 0x00413840)
#define ObjectCollision ((void(__cdecl*)(__int16, ITEM_INFO *, COLL_INFO *)) 0x004138C0)

//	0x00413920:		DoorCollision
//	0x004139A0:		TrapCollision
//	0x00413A10:		ItemPushLara
//	0x00413D20:		TestBoundsCollide
//	0x00413DF0:		TestLaraPosition
//	0x00413F30:		AlignLaraPosition
//	0x00414070:		MoveLaraPosition
//	0x00414200:		Move3DPosTo3DPos

#endif // COLLIDE_H_INCLUDED
