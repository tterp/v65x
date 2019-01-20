#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;

    void HighBeam(unsigned int black, unsigned int blue, unsigned int white, unsigned int x, unsigned int y)
    {
		XSetForeground(dpy, DefaultGC(dpy, screen), black);
	              XFillRectangle(dpy, win, DefaultGC(dpy, screen), x, y, 64, 64);
	              XSetForeground(dpy, DefaultGC(dpy, screen), blue);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), x, y, 64, 64);
	              XSetForeground(dpy, DefaultGC(dpy, screen), white);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), x + 7, y + 8, 37 , 37, 90*64, 180*64);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), x + 29, y + 16, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), x + 29, y + 22, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), x + 29, y + 28, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), x + 29, y + 34, 26, 3);
                  XSetForeground(dpy, DefaultGC(dpy, screen), blue);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), x + 10, y + 12, 23 , 31, 90*64, 180*64);
}
