#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;

    void LeftTurn(unsigned int black, unsigned int green)
    {
            XSetForeground(dpy, DefaultGC(dpy, screen), black);
	    XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 128, 160);
	    XSetForeground(dpy, DefaultGC(dpy, screen), green);
	          XDrawLine(dpy, win, DefaultGC(dpy, screen), 20, 63, 20, 64);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 21, 62, 21, 65);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 22, 61, 22, 66);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 23, 60, 23, 67);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 24, 59, 24, 68);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 25, 58, 25, 69);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 26, 57, 26, 70);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 27, 56, 27, 71);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 28, 55, 28, 72);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 54, 29, 73);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 30, 53, 30, 74);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 31, 52, 31, 75);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 32, 51, 32, 76);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 33, 50, 33, 77);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 34, 49, 34, 78);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 35, 48, 35, 79);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 36, 47, 36, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 37, 46, 37, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 38, 45, 38, 82);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 39, 44, 39, 83);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 40, 43, 40, 84);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 41, 42, 41, 85);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 42, 41, 42, 86);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 43, 40, 43, 87);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 44, 39, 44, 88);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 45, 38, 45, 89);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 46, 37, 46, 90);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 47, 36, 47, 91);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 48, 35, 48, 92);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 49, 34, 49, 93);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 50, 33, 50, 94);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 51, 32, 51, 95);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 52, 31, 52, 96);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 53, 30, 53, 97);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 54, 29, 54, 98);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 55, 28, 55, 99);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 56, 27, 56, 100);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 57, 26, 57, 101);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 58, 25, 58, 102);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 59, 24, 59, 103);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 60, 23, 60, 104);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 61, 22, 61, 105);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 62, 21, 62, 106);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 63, 20, 63, 107);

	          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64,50, 40, 26);

}
