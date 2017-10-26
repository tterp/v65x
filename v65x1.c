#include <stdio.h>
#include <X11/Xlib.h>


   
   
   
  

int main (int argc, char *argv[])
{
	Display *dpy;
	int screen;
    Window win;
    XEvent event;
    
    dpy = XOpenDisplay(NULL);
    screen = DefaultScreen(dpy);
    
    win = XCreateSimpleWindow(dpy, RootWindow(dpy, screen), 0, 0, 128, 160, 0, BlackPixel(dpy, screen), BlackPixel(dpy, screen));
    XSelectInput(dpy, win, ExposureMask | KeyPressMask);
    XMapWindow(dpy, win);
    
    Colormap screen_colormap;     /* color map to use for allocating colors.   */
        XColor red, blue, green, white, black;
        screen_colormap = DefaultColormap(dpy, DefaultScreen(dpy));
        XAllocNamedColor(dpy, screen_colormap, "blue", &blue, &blue);
        XAllocNamedColor(dpy, screen_colormap, "green", &green, &green);
        XAllocNamedColor(dpy, screen_colormap, "red", &red, &red);
        XAllocNamedColor(dpy, screen_colormap, "white", &white, &white);
		XAllocNamedColor(dpy, screen_colormap, "black", &black, &black);
    
    while(1)
    {
		XNextEvent(dpy, &event);
	
		
		XSetForeground(dpy, DefaultGC(dpy, screen), green.pixel);
		XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
		
		XSetForeground(dpy, DefaultGC(dpy, screen), white.pixel);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 7, 23, 7, 30);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 8, 20, 8, 33);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 9, 17, 9, 36);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 10, 16, 10, 37);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 11, 15, 11, 38);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 12, 13, 12, 40);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 13, 13, 13, 40);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 14, 12, 14, 41);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 11, 15, 42);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 16, 10, 16, 43);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 17, 10, 17, 43);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 18, 9, 18, 44);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 19, 9, 19, 44);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 20, 9, 20, 44);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 21, 8, 21, 45);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 22, 8, 22, 45);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 23, 8, 23, 45);
        XDrawLine(dpy, win, DefaultGC(dpy, screen), 24, 8, 24, 45);
        
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
        
        XSetForeground(dpy, DefaultGC(dpy, screen), blue.pixel);
		XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 0, 64, 53);
		
		
		XSetForeground(dpy, DefaultGC(dpy, screen), red.pixel);
		XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 53, 64, 53);
    //  
		//XDrawLine(dpy, win, DefaultGC(dpy, screen), 10, 10, 60, 60);
	}
    return 0;
}
