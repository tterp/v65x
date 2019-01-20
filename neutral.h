#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;

    void Neutral(unsigned int black, unsigned int green, unsigned int white)
    {
		  XSetForeground(dpy, DefaultGC(dpy, screen), black);
		  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 63, 64, 64);
	          XSetForeground(dpy, DefaultGC(dpy, screen), green);
		  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 63, 64, 64);
		  XSetForeground(dpy, DefaultGC(dpy, screen), white);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 10, 64, 5, 30);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 40, 64, 5, 30);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 64, 40, 90);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 65, 40, 91);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 66, 40, 92);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 67, 40, 93);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 68, 40, 94);
}
