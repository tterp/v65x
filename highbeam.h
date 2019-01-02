#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;
   
    void HighBeam(unsigned int black, unsigned int blue, unsigned int white)
    {
		XSetForeground(dpy, DefaultGC(dpy, screen), black);
	              XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), blue);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), white);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), 7, 8, 37 , 37, 90*64, 180*64);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 16, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 22, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 28, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 34, 26, 3);
                  XSetForeground(dpy, DefaultGC(dpy, screen), blue);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), 10, 12, 23 , 31, 90*64, 180*64);
}
