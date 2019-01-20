#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;

    void Oil(unsigned int black, unsigned int red, unsigned int white)
    {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black);
		  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 65, 0, 64, 53);
	          XSetForeground(dpy, DefaultGC(dpy, screen), red);
		  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 0, 64, 53);
	          XSetForeground(dpy, DefaultGC(dpy, screen), white);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 96, 14, 8, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 99, 17, 3, 2);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 93, 19, 24, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 108, 22, 3, 15);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 89, 34, 19, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 71, 19, 5, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 115, 19, 3, 8);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 75, 22, 89, 36);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 76, 22, 90, 36);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 77, 22, 91, 36);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 78, 22, 92, 36);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 109, 29, 117, 24);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 109, 30, 117, 25);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 109, 31, 117, 26);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 87, 25, 93, 19);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 88, 25, 94, 19);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 89, 25, 94, 20);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 90, 25, 94, 21);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 76, 19, 90, 23);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 76, 20, 90, 24);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 76, 21, 90, 25);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 76, 22, 90, 25);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 69, 29, 69, 30);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 70, 27, 70, 31);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 71, 25, 71, 32);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 72, 27, 72, 31);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 73, 29, 73, 30);
}

