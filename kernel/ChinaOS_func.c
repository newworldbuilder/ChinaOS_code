/********************
ChinaOS all funtion
********************/
//#include "xxx.h"

//os GUI

unsigned short write_scr(int *x, int *y,unsigned short color);   //write a pixel on the screan-mem
unsigned short read_scr(char *str);                              //read a pixel from screan-mem 
void line(int *x,int *y,unsigned short color);                   //draw a line  
unsigned short window_txt(int *x,int *y,char *str,char *title);   //add a new window (api)
short api_get_mouse();                                            //rturn the mouse x,y
void api_mouse_down();                                             //let the mouse down(api)
void api_pic(char *file,char *type);
void api_music(char *file);


//os inside

int fifo(char *type,int mem);
int keys(char *type);

//os core(kernel)
void io_hlt();
void io_write(short short numb,char *place);
void io_read(short short numb,char *to_were);


