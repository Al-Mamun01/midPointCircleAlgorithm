//draw a  midpoint circle algorithm by using c program
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>       //those are header files that's are preprocessior directory
void plot_pts(int,int int, int,) ;   //this function are use to graph plot . it's taken 4 parameter and those are integer
void main(){
    int gdriver=DETECT,gmode;              //it's graphics driver
    int xc, yc, x , y;        //that's denoted center coordinate x axis and center coordinate for   y   axis and x, y is for basic operation .
    float p,r;                          //p is decision parameter and r is radius .
    clrscr();                   //this function are use for screen clear 
    initgraph(&gdriver,&gmode,"C:\\TUBOC3\\BGI");       //graphics file initialize
    printf("Enter the center Coordinates ");       //ask user for center coordinates
    scanf("%d %d",&xc,&yc);                        //coordinates input
    printf("Enter the radius ");  //ask for radius 
    scanf("%f",&r);   //radius input

            // and here start of main algorithm

    x=0;            //x all time start from 0
    y=r;            //y all time start from r
    p=(5/4)-r;      //initial decision parameter value of p

    do
    {
        plot_pts(xc,yc,x,y);  // 4 input pass for set of point plot
        if (p<0)     //if p is negetive
        {
            p=p+((2*x)+1);    //initialize the value of p
        }
        else{
            p=p+((2*(x-y))+1);
            y--;
        }
         x++;        //if execution done then here increment the value of x
    }
    while (x<y);   //when x bigger than y then the loop will be terminate
    
        if (x==y)
        {
            plot_pts(xc,yc,xy);  //call the plot point
        }
        getch();          //finished turbo c
        closegraph();
    }

void plot pts(int x, int y, int x1, int y1)     //4 parameter pass 
{  
    //put pixel comes from graphics file .and put pixel pass three parameter ..
    //first x coordinate , second is y coordinate and third is color ..

    putpixel(x+x1,y+y1,YELLOW);   
    putpixel(x-x1,y+y1,YELLOW);
    putpixel(x+x1,y-y1,YELLOW);
    putpixel(x-x1,y-y1,YELLOW);
    putpixel(x+y1,y+x1,YELLOW);
    putpixel(x-y1,y+x1,YELLOW);
    putpixel(x+y1,y-x1,YELLOW);
    putpixel(x-y1,y-x1,YELLOW);

}
