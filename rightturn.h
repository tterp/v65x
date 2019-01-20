#include <X11/Xlib.h>
    Display *dpy;
	int screen;
    Window win;

    void RightTurn(unsigned int black, unsigned int green)
    {
            XSetForeground(dpy, DefaultGC(dpy, screen), black);
	    XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 128, 128);
	    XSetForeground(dpy, DefaultGC(dpy, screen), green);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 20, 50, 44, 26);
	          XDrawLine(dpy, win, DefaultGC(dpy, screen), 64, 20, 64, 107);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 21, 65, 106);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 66, 22, 66, 105);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 67, 23, 67, 104);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 68, 24, 68, 103);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 69, 25, 69, 102);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 70, 26, 70, 101);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 71, 27, 71, 100);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 72, 28, 72, 99);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 73, 29, 73, 98);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 74, 30, 74, 97);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 75, 31, 75, 96);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 76, 32, 76, 95);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 77, 33, 77, 94);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 78, 34, 78, 93);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 79, 35, 79, 92);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 80, 36, 80, 91);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 81, 37, 81, 90);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 82, 38, 82, 89);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 83, 39, 83, 88);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 84, 40, 84, 87);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 85, 41, 85, 86);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 86, 42, 86, 85);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 87, 43, 87, 84);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 88, 44, 88, 83);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 89, 45, 89, 82);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 90, 46, 90, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 91, 47, 91, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 92, 48, 92, 79);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 93, 49, 93, 78);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 94, 50, 94, 77);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 95, 51, 95, 76);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 96, 52, 96, 75);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 97, 53, 97, 74);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 98, 54, 98, 73);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 99, 55, 99, 72);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 100, 56, 100, 71);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 101, 57, 101, 70);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 102, 58, 102, 69);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 103, 59, 103, 68);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 104, 60, 104, 67);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 105, 61, 105, 66);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 106, 62, 106, 65);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 107, 63, 107, 64);
         
}

