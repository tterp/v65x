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
       printf("tast s\n");

  if ((keysym == XK_s) && (event.type == KeyRelease))
		
		{
      XSetForeground(dpy, DefaultGC(dpy, screen), black.pixel);
		XFillRectangle(dpy, win, DefaultGC(dpy, screen), 0, 0, 64, 53);
   }
}
 
  

/* XComposeStatus compose; is not used, though it's in some books */
/*   count = XLookupString(event2,buffer,buffer_size, &keysym);
   
   if ((keysym >= XK_space) && (keysym <= XK_asciitilde)){
      printf ("Ascii key:- ");
      if (event2->state & ShiftMask)
             printf("(Shift) %s\n", buffer);
      else if (event2->state & LockMask)
             printf("(Caps Lock) %s\n", buffer);
      else if (event2->state & ControlMask)
             printf("(Control) %c\n", 'a'+ buffer[0]-1) ;
      else printf("%s\n", buffer) ;
   }
   else if ((keysym >= XK_Shift_L) && (keysym <= XK_Hyper_R)){
      printf ("modifier key:- ");
      switch (keysym){
      case XK_Shift_L: printf("Left Shift\n"); break;
      case XK_Shift_R: printf("Right Shift\n");break;
      case XK_Control_L: printf("Left Control\n");break;
      case XK_Control_R: printf("Right Control\n");	break;
      case XK_Caps_Lock: printf("Caps Lock\n");	break;
      case XK_Shift_Lock: printf("Shift Lock\n");break;
      case XK_Meta_L: printf("Left Meta\n");	break;
      case XK_Meta_R: printf("Right Meta\n");	break;

      }
    }
   else if ((keysym >= XK_Left) && (keysym <= XK_Down)){
      printf("Arrow Key:-");
      switch(keysym){
      case XK_Left: printf("Left\n");break;
      case XK_Up: printf("Up\n");break;
      case XK_Right: printf("Right\n");break;
      case XK_Down: printf("Down\n");break;	
      }
    }
   else if ((keysym >= XK_F1) && (keysym <= XK_F35)){
      printf ("function key %d pressed\n", keysym - XK_F1);

      if (buffer == NULL)
         printf("No matching string\n");
      else
         printf("matches <%s>\n",buffer);
   }

   else if ((keysym == XK_BackSpace) || (keysym == XK_Delete)){
      printf("Delete\n");
   }

   else if ((keysym >= XK_KP_0) && (keysym <= XK_KP_9)){
       printf("Number pad key %d\n", keysym -  XK_KP_0);
   }
   else if (keysym == XK_Break) {
        printf("closing display\n"); 
        //XCloseDisplay(display); 
        //exit (0);
   }else{
      printf("Not handled\n");
    }
}*/
 
}

    
    
}

