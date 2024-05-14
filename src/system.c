/* System dependent declarations.

   Copyright 2024 Free Software Foundation, Inc.

   This file is part of GNU DIFF.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#define SYSTEM_INLINE _GL_EXTERN_INLINE
#include "system.h"

/* Define variables declared in system.h (which see).  */
#if (defined __linux__ || defined __CYGWIN__ || defined __FreeBSD__ \
     || defined __NetBSD__ || defined _AIX)
dev_t proc_dev;
#endif
#if care_about_symlink_size && (defined __linux__ || defined __ANDROID__)
signed char symlink_size_ok;
#endif
