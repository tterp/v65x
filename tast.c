/*
 * tast.c
 * 
 * Copyright 2018  <pi@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/extensions/XTest.h>
#include <wiringPi.h>

int main(int argc, char **argv)
{
   Display *dis;
   dis = XOpenDisplay(NULL);
   KeyCode modcode = 0;
      
      for(;;)
      {
		  modcode = XKeysymToKeycode(dis, XStringToKeysym("A"));
		  XTestFakeKeyEvent(dis, modcode, FALSE, 0);
		  XFlush(dis);
		  XTestFakeKeyEvent(dis, modcode, TRUE, 0);
		  XFlush(dis);
		  delay(100);
		  XTestFakeKeyEvent(dis, modcode, FALSE, 0);
		  XFlush(dis);
		  
	}
	return 0;
}

