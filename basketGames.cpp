#include <graphics.h>
#include <math.h>
void drawcircle(int x0, int y0, int radius)//mid point circle
{
    //int r = radius;
    int p = 1-radius;
    int x=0;
    int y=radius;

    while (x<= y)
    {
        putpixel(x0 + x, y0 + y, 14);
        putpixel(x0 + y, y0 + x, 14);
        putpixel(x0 - y, y0 + x, 14);
        putpixel(x0 - x, y0 + y, 14);
        putpixel(x0 - x, y0 - y, 14);
        putpixel(x0 - y, y0 - x, 14);
        putpixel(x0 + y, y0 - x, 14);
        putpixel(x0 + x, y0 - y, 14);

        if (p<0)
        {
            p=p+2*x+3;
            x++;
        }

        else
        {
            p=p+2*x-2*y+5;
            x++;
            y--;
        }
    }
}

void basket(int x0, int y0, int radius)//mid point circle
{
    int r = radius;
    int p = 1-r;
    int x=0;
    int y=r;

    while (x<= y)
    {
        putpixel(x0 + x, y0 + y, 10);
        putpixel(x0 + y, y0 + x, 10);
        putpixel(x0 - y, y0 + x, 10);
        putpixel(x0 - x, y0 + y, 10);


        if (p<0)
        {
            p=p+2*x+3;
            x++;
        }

        else
        {
            p=p+2*x-2*y+5;
            x++;
            y--;
        }
    }
}

int main()
{

    initwindow(800,800);
    int i=0,j=0,k=0;
    int x=270,y=650;


    while(1)
    {

        cleardevice();

        basket(x,y,45);
        if(GetAsyncKeyState(VK_RIGHT))
        {
            x=x+10; //move basket to right
        }
        else if(GetAsyncKeyState(VK_LEFT))
        {
            x=x-10;  //move basket to left
        }

        drawcircle(400,-100+i,10);
        drawcircle(400,-200+j,10);
        drawcircle(300,-100+i,10);
        drawcircle(400,-150+k,10);
        drawcircle(340,-150+k,10);
        drawcircle(370,-150+j,10);
        drawcircle(330,-150+i,10);
        drawcircle(320,-15+i,10);
        drawcircle(240,-600+j,10);
        drawcircle(280,-200+i,10);
        drawcircle(210,-300+k,10);
        drawcircle(233,-550+i,10);
        drawcircle(340,-250+i,10);


        //AREA
        line(200,0,200,getmaxx());
        line(535,0,535,getmaxx());
        //Circle SPEED
        j=j+4;
        k=k+2;
        i++;

        if(GetAsyncKeyState(VK_RETURN))

            break;
        delay(10);




    }


    getch();
    return 0;
}
