#include <stdio.h>
#include <X11/Xlib.h>
#include <wiringPi.h>
#include "/usr/include/X11/keysymdef.h"
#include "/usr/include/X11/keysym.h"
   
int main (int argc, char *argv[])
{
	wiringPiSetup();
    pinMode(0, INPUT);
    pullUpDnControl (0, PUD_UP);
    
    
    
    Display *dpy;
	int screen;
    Window win;
    XEvent event;
    //XKeyEvent *event2;
    KeySym keysym;
    int count;
int buffer_size = 80;
char buffer[80];
    Status status;
    int len;
    int buf_len = 10;
    char string[25];
    //wchar_t *buffer = (wchar_t *)malloc(buf_len * sizeof(wchar_t));
    
        
    int Input = digitalRead (0);
    int Indgang = 3;
    dpy = XOpenDisplay(NULL);
    screen = DefaultScreen(dpy);
    
    win = XCreateSimpleWindow(dpy, RootWindow(dpy, screen), 0, 0, 128, 160, 0, BlackPixel(dpy, screen), BlackPixel(dpy, screen));
    XSelectInput(dpy, win, ExposureMask | KeyPressMask | KeyReleaseMask | KeymapStateMask | StructureNotifyMask);
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
		count = XLookupString(&event,buffer,buffer_size, &keysym);
		
		if (keysym == XK_a) /*&& (event.type == KeyRelease))*/
				{
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), green.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
		          XSetForeground(dpy, DefaultGC(dpy, screen), white.pixel);
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
                  printf("tast a\n");
        
        if ((keysym == XK_a) && (event.type == KeyRelease))
			   {
                 XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
	             XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
               }
}
        if (keysym == XK_s)
		        {
	              XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
	              XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), blue.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), white.pixel);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), 7, 8, 37 , 37, 90*64, 180*64);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 16, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 22, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 28, 26, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 29, 34, 26, 3);
                  XSetForeground(dpy, DefaultGC(dpy, screen), blue.pixel);
                  XFillArc(dpy, win, DefaultGC(dpy, screen), 10, 12, 23 , 31, 90*64, 180*64);
                  printf("tast s\n");

        if ((keysym == XK_s) && (event.type == KeyRelease))
		       {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
               }
}
 
        if (keysym == XK_o)
		        {
	              XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 65, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), red.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 0, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), white.pixel);
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
                  printf("tast o\n");

        if ((keysym == XK_o) && (event.type == KeyRelease))
			   {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 0, 64, 53);
               }
}
        if (keysym == XK_b)
		        {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 54, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), red.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 54, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), white.pixel);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 82, 66, 9, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 102, 66, 9, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 76, 69, 40, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 76, 69, 3, 25);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 114, 69, 3, 25);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 76, 92, 40, 3);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 83, 78, 8, 2);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 105, 75, 2, 8);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 102, 78, 8, 2);
                  printf("tast b\n");

        if ((keysym == XK_b) && (event.type == KeyRelease))
		       {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 54, 64, 53);
               }
} 
        if (keysym == XK_n)
		        {
	              XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 53, 64, 53);
	              XSetForeground(dpy, DefaultGC(dpy, screen), green.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 53, 64, 53);
		          XSetForeground(dpy, DefaultGC(dpy, screen), white.pixel);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 10, 64, 5, 30);
                  XFillRectangle(dpy, win, DefaultGC(dpy, screen), 40, 64, 5, 30);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 64, 40, 90);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 65, 40, 91);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 66, 40, 92);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 67, 40, 93);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 68, 40, 94);
                  printf("tast n\n");

        if ((keysym == XK_n) && (event.type == KeyRelease))
			   {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 53, 64, 53);
               }
}
 if (keysym == XK_l)
		        {
	              XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 128, 160);
	              XSetForeground(dpy, DefaultGC(dpy, screen), green.pixel);
		          XDrawLine(dpy, win, DefaultGC(dpy, screen), 5, 80, 65, 20);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 6, 80, 65, 21);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 7, 80, 65, 22);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 8, 80, 65, 23);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 9, 80, 65, 24);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 10, 80, 65, 25);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 11, 80, 65, 26);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 12, 80, 65, 27);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 13, 80, 65, 28);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 14, 80, 65, 29);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 80, 65, 30);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 16, 80, 65, 31);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 17, 80, 65, 32);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 18, 80, 65, 33);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 19, 80, 65, 34);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 20, 80, 65, 35);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 21, 80, 65, 36);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 22, 80, 65, 37);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 23, 80, 65, 38);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 24, 80, 65, 39);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 25, 80, 65, 40);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 26, 80, 65, 41);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 27, 80, 65, 42);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 28, 80, 65, 43);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 80, 65, 44);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 30, 80, 65, 45);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 31, 80, 65, 46);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 32, 80, 65, 47);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 33, 80, 65, 48);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 34, 80, 65, 49);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 35, 80, 65, 50);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 36, 80, 65, 51);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 37, 80, 65, 52);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 38, 80, 65, 53);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 39, 80, 65, 54);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 40, 80, 65, 55);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 41, 80, 65, 56);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 42, 80, 65, 57);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 43, 80, 65, 58);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 44, 80, 65, 59);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 45, 80, 65, 60);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 46, 80, 65, 61);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 47, 80, 65, 62);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 48, 80, 65, 63);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 49, 80, 65, 64);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 50, 80, 65, 65);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 51, 80, 65, 66);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 52, 80, 65, 67);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 53, 80, 65, 68);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 54, 80, 65, 69);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 55, 80, 65, 70);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 56, 80, 65, 71);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 57, 80, 65, 72);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 58, 80, 65, 73);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 59, 80, 65, 74);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 60, 80, 65, 75);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 61, 80, 65, 76);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 62, 80, 65, 77);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 63, 80, 65, 78);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 64, 80, 65, 79);
           
                  XDrawLine(dpy, win, DefaultGC(dpy, screen),  5, 81, 65, 141);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen),  6, 81, 65, 140);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen),  7, 81, 65, 139);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen),  8, 81, 65, 138);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen),  9, 81, 65, 137);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 10, 81, 65, 136);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 11, 81, 65, 135);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 12, 81, 65, 134);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 13, 81, 65, 133);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 14, 81, 65, 132);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 15, 81, 65, 131);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 16, 81, 65, 130);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 17, 81, 65, 129);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 18, 81, 65, 128);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 19, 81, 65, 127);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 20, 81, 65, 126);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 21, 81, 65, 125);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 22, 81, 65, 124);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 23, 81, 65, 123);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 24, 81, 65, 122);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 25, 81, 65, 121);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 26, 81, 65, 120);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 27, 81, 65, 119);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 28, 81, 65, 118);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 29, 81, 65, 117);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 30, 81, 65, 116);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 31, 81, 65, 115);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 32, 81, 65, 114);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 33, 81, 65, 113);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 34, 81, 65, 112);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 35, 81, 65, 111);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 36, 81, 65, 110);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 37, 81, 65, 109);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 38, 81, 65, 108);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 39, 81, 65, 107);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 40, 81, 65, 106);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 41, 81, 65, 105);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 42, 81, 65, 104);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 43, 81, 65, 103);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 44, 81, 65, 102);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 45, 81, 65, 101);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 46, 81, 65, 100);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 47, 81, 65, 99);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 48, 81, 65, 98);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 49, 81, 65, 97);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 50, 81, 65, 96);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 51, 81, 65, 95);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 52, 81, 65, 94);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 53, 81, 65, 93);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 54, 81, 65, 92);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 55, 81, 65, 91);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 56, 81, 65, 90);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 57, 81, 65, 89);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 58, 81, 65, 88);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 59, 81, 65, 87);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 60, 81, 65, 86);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 61, 81, 65, 85);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 62, 81, 65, 84);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 63, 81, 65, 83);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 64, 81, 65, 82);
                  
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 56, 60, 50);
		          
                  
                  printf("tast l\n");

        if ((keysym == XK_l) && (event.type == KeyRelease))
			   {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 128, 160);
               }
}
if (keysym == XK_h)
		        {
	              XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 128, 160);
	              XSetForeground(dpy, DefaultGC(dpy, screen), green.pixel);
	              XFillRectangle(dpy, win, DefaultGC(dpy, screen), 5, 56, 60, 50);
		          XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 21, 124, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 22, 123, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 23, 122, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 24, 121, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 25, 120, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 26, 119, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 27, 118, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 28, 117, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 29, 116, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 30, 115, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 31, 114, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 32, 113, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 33, 112, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 34, 111, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 35, 110, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 36, 109, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 37, 108, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 38, 107, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 39, 106, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 40, 105, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 41, 104, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 42, 103, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 43, 102, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 44, 101, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 45, 100, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 46, 99, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 47, 98, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 48, 97, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 49, 96, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 50, 95, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 51, 94, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 52, 93, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 53, 92, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 54, 91, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 55, 90, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 56, 89, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 57, 88, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 58, 87, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 59, 86, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 60, 85, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 61, 84, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 62, 83, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 63, 82, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 64, 81, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 65, 80, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 66, 79, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 67, 78, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 68, 77, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 69, 76, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 70, 75, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 71, 74, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 72, 73, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 73, 72, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 74, 71, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 75, 70, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 76, 69, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 77, 68, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 78, 67, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 79, 66, 80);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 80, 65, 80);
           
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 81, 65, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 82, 66, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 83, 67, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 84, 68, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 85, 69, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 86, 70, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 87, 71, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 88, 72, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 89, 73, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 90, 74, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 91, 75, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 92, 76, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 93, 77, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 94, 78, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 95, 79, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 96, 80, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 97, 81, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 98, 82, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 99, 83, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 100, 84, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 101, 85, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 102, 86, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 103, 87, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 104, 88, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 105, 89, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 106, 90, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 107, 91, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 108, 92, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 109, 93, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 110, 94, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 111, 95, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 112, 96, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 113, 97, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 114, 98, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 115, 99, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 116, 100, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 117, 101, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 118, 102, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 119, 103, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 120, 104, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 121, 105, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 122, 106, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 123, 107, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 124, 108, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 125, 109, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 126, 110, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 127, 111, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 128, 112, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 129, 113, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 130, 114, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 131, 115, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 132, 116, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 133, 117, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 134, 118, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 135, 119, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 136, 120, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 137, 121, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 138, 122, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 139, 123, 81);
                  XDrawLine(dpy, win, DefaultGC(dpy, screen), 65, 140, 124, 81);
                  printf("tast h\n");

        if ((keysym == XK_h) && (event.type == KeyRelease))
			   {
                  XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		          XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 128, 160);
               }
}
}

}
    


