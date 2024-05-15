// Copyright 2023-24 Gyozo Gaspar
//
// This file is part of Lottie layout. The Lottie layout is free
// software: you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option)
// any later version.  The Lottie layout is distributed in the hope
// that it will be useful, but WITHOUT ANY WARRANTY; without even the
// implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE. See the GNU General Public License for more details.  You
// should have received a copy of the GNU General Public License along
// with Lottie layout. If not, see <https://www.gnu.org/licenses/>.

#pragma once

// Naming convention
// ---
// First letter:
//   w -> windows
//   l -> linux
//   m -> mac
// 2nd and 3rd letter:
//   en -> US International
//   hu -> Hungarian
//
// dacute -> double acute
// cap -> capital

// LAYERS FOR WIN-ENGLISH-QUERTY HOST (WEN)
//
#define SYSTEM    0

// BUNYA-DTM LAYOUT LAYERS FOR WIN-HUNGARIAN-QUERTZ HOST (WHU)

#define WHU_BASE 1
#define WHU_LMOD 2 // Left modifiers
#define WHU_RMOD 3 // Right modifiers
#define WHU_NAV 4
#define WHU_NUM 5
#define WHU_FUN 6
#define WHU_NPAD 7
#define WHU_MOUSE 8
#define WHU_SAFE_RANGE SAFE_RANGE

#define LHU_BASE 9
#define LHU_LMOD 10 // Left modifiers
#define LHU_RMOD 11 // Right modifiers
#define LHU_NAV 12
#define LHU_NUM 13
#define LHU_FUN 14
#define LHU_NPAD 15
#define LHU_MOUSE 16
#define LHU_SAFE_RANGE (SAFE_RANGE + 450)

#define MHU_BASE 17
#define MHU_LMOD 18 // Left modifiers
#define MHU_RMOD 19 // Right modifiers
#define MHU_NAV 20
#define MHU_NUM 21
#define MHU_FUN 22
#define MHU_NPAD 23
#define MHU_MOUSE 24
#define MHU_SAFE_RANGE (SAFE_RANGE + 900)

#define ONE_SHOT_LAYERS WHU_LMOD, WHU_RMOD, WHU_NUM, WHU_FUN, LHU_LMOD, LHU_RMOD, LHU_NUM, LHU_FUN, MHU_LMOD, MHU_RMOD, MHU_NUM, MHU_FUN
