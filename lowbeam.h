 //#include <stdio.h>
#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;
   
          
      void LowBeam(unsigned int black, unsigned int green, unsigned int white)
{
	              XSetForeground(dpy, DefaultGC(dpy, screen), black);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), green);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
		          XSetForeground(dpy, DefaultGC(dpy, screen), white);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), 7, 8, 37 , 37, 90*64, 180*64);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 16, 55, 22);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 17, 55, 23);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 18, 55, 24);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 22, 55, 28);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 23, 55, 29);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 24, 55, 30);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 28, 55, 34);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 29, 55, 35);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 30, 55, 36);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 34, 55, 40);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 35, 55, 41);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 36, 55, 42);
} 
