 //#include <stdio.h>
#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;

      void LowBeam(unsigned int black, unsigned int green, unsigned int white, unsigned int x, unsigned int y)
{

                      XSetForeground(dpy, DefaultGC(dpy, screen), black);
		           XFillRectangle(dpy, win, DefaultGC(dpy, screen), x, y, 64, 64);

	              XSetForeground(dpy, DefaultGC(dpy, screen), green);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), x, y, 64, 64);
		          XSetForeground(dpy, DefaultGC(dpy, screen), white);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), x + 7, y + 8, 37 , 37, 90*64, 180*64);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 16, x + 55, y + 22);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 17, x + 55, y + 23);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 18, x + 55, y + 24);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 22, x + 55, y + 28);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 23, x + 55, y + 29);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 24, x + 55, y + 30);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 28, x + 55, y + 34);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 29, x + 55, y + 35);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 30, x + 55, y + 36);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 34, x + 55, y + 40);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 35, x + 55, y + 41);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), x + 29, y + 36, x + 55, y + 42);
}
