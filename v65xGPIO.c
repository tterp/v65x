#include <stdio.h>
#include <X11/Xlib.h>
#include <wiringPi.h>
#include <X11/keysymdef.h>
#include <X11/keysym.h>
#include <unistd.h>

#include "/home/pi/v65x/highbeam.h"
#include "/home/pi/v65x/lowbeam.h"
#include "/home/pi/v65x/battery.h"
#include "/home/pi/v65x/leftturn.h"
#include "/home/pi/v65x/rightturn.h"
#include "/home/pi/v65x/neutral.h"
#include "/home/pi/v65x/oil.h"

#define BlackColor  black.pixel
#define GreenColor  green.pixel
#define WhiteColor  white.pixel
#define BlueColor   blue.pixel
#define RedColor    red.pixel
#define OFF 0
#define ON 1

static unsigned int Pause = 0, x = 0, y = 0, xspeed = 1, yspeed = 2;

    Display *dpy;
    int screen;
    Window win;
    XEvent event;
    KeySym keysym;
    int count;
    int buffer_size = 80;
    char buffer[80];
    Status status;
    int len;
    int buf_len = 10;
    char string[25];


int main (int argc, char *argv[])
{
    wiringPiSetup();
    pinMode(7, INPUT);
    pullUpDnControl(7, PUD_UP);
    pinMode(0, INPUT);
    pullUpDnControl(0, PUD_UP);
    pinMode(2, INPUT);
    pullUpDnControl(2, PUD_UP);
    pinMode(3, INPUT);
    pullUpDnControl(3, PUD_UP);
    pinMode(21, INPUT);
    pullUpDnControl(21, PUD_UP);
    pinMode(22, INPUT);
    pullUpDnControl(22, PUD_UP);
    pinMode(23, INPUT);
    pullUpDnControl(23, PUD_UP);

    dpy = XOpenDisplay(NULL);
    screen = DefaultScreen(dpy);

    win = XCreateSimpleWindow(dpy, RootWindow(dpy, screen), 0, 0, 128, 128, 0, BlackPixel(dpy, screen), BlackPixel(dpy, screen));
    XSelectInput(dpy, win, ExposureMask | KeyReleaseMask);
    XMapWindow(dpy, win);


        Colormap screen_colormap;     // color map to use for allocating colors.
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
         Pause += 1;
         XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
         XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 128, 128);

                 if (digitalRead(21)==0)
                                {
                                  Battery(BlackColor, RedColor, WhiteColor);
                                  Pause = 0;
                                }

                 if (digitalRead(22)==0)
                                {
                                  Neutral(BlackColor, GreenColor, WhiteColor);
                                  Pause = 0;
                                }
                 if (digitalRead(23)==0)
                                {
                                  Oil(BlackColor, RedColor, WhiteColor);
                                  Pause = 0;
                                }



                if (digitalRead(2)==0)
                                {
                                 LeftTurn(BlackColor, GreenColor);
                                 Pause = 0;
                                }
                if (digitalRead(3)==0)
                                {
                                 RightTurn(BlackColor, GreenColor);
                                 Pause = 0;
                                }



                if ((digitalRead(0)==0) && (Pause < 8))
				{
        		LowBeam(BlackColor, GreenColor, WhiteColor, 0, 0);
	                		                }
                if ((digitalRead(0)==0) && (Pause > 8))
                                {
                                 LowBeam(BlackColor, GreenColor, WhiteColor, x, y);
                                 }
                if ((digitalRead(7)==0) && (Pause < 8))
				{
        		HighBeam(BlackColor, BlueColor, WhiteColor, 0, 0);
	                		                }
                if ((digitalRead(7)==0) && (Pause > 8))
                                {
                                 HighBeam(BlackColor, BlueColor, WhiteColor, x, y);
                                 }




           x += xspeed;
           y += yspeed;

           if (y > 63 || y < 0)
                  {
                    yspeed *= -1;
                  }

           if (x > 63 || x < 0)
                  {
                    xspeed *= -1;
                  }

}

}


