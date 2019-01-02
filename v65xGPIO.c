#include <stdio.h>
#include <X11/Xlib.h>
#include <wiringPi.h>
#include "/usr/include/X11/keysymdef.h"
#include "/usr/include/X11/keysym.h"
#include <unistd.h>

#include "/home/pi/v65GPIO/highbeam.h"
#include "/home/pi/v65GPIO/lowbeam.h"
#include "/home/pi/v65GPIO/battery.h"

#define BlackColor  black.pixel
#define GreenColor  green.pixel
#define WhiteColor  white.pixel
#define BlueColor   blue.pixel
#define RedColor    red.pixel
#define OFF 0  
#define ON 1 


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
   static unsigned int kortlys = 0;

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
    
    win = XCreateSimpleWindow(dpy, RootWindow(dpy, screen), 0, 0, 128, 160, 0, BlackPixel(dpy, screen), BlackPixel(dpy, screen));
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
        // XSendEvent(dpy, win, TRUE,KeyReleaseMask, XK_a == KeyRelease);
	 XNextEvent(dpy, &event);
		if (digitalRead(0)==0)// && (kortlys == 0))
				{
					
					LowBeam(BlackColor, GreenColor, WhiteColor);
				//delay(1);
                    //kortlys = 1;
                 }
        
       else if ((digitalRead(0)==1) && (digitalRead(7)==1))
			   {
                 XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
	             XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
	             //kortlys = OFF;
	             //delay(500);
               }

        if  (digitalRead(7)==0)
               {
                  HighBeam(BlackColor, BlueColor, WhiteColor);
        }

        else if ((digitalRead(7)==1) && (digitalRead(0)==1))
        {
         XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
         XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
}

        if (digitalRead(21)==0)
            {
              Battery(BlackColor, RedColor, WhiteColor);
            }
         else if (digitalRead(21)==1)
           {
           XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
           XFillRectangle(dpy, win, DefaultGC(dpy, screen), 64, 54 ,64, 53);
	}

}

}
      
        


    


