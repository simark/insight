/* Main function for gdb with insight.  

   Copyright (C) 2002, 2014 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */


#include "defs.h"
#include "main.h"
#include <string.h>

int
main (int argc, char **argv)
{
  struct captured_main_args args;
  memset (&args, 0, sizeof args);
  args.argc = argc;
  args.argv = argv;
  args.interpreter_p = "insight";
  return gdb_main (&args);
}
