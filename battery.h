#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;
   
    void Battery(unsigned int black, unsigned int red, unsigned int white)
    {
		          XSetForeground(dpy, DefaultGC(dpy, screen), black);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 54, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), red);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 54, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), white);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 82, 66, 9, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 102, 66, 9, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 76, 69, 40, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 76, 69, 3, 25);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 114, 69, 3, 25);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 76, 92, 40, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 83, 78, 8, 2);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 105, 75, 2, 8);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 102, 78, 8, 2);
}

