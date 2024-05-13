#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<cmath>
using namespace std;
int X,Y,mx,my;
void window();
void departure();
void translation()
{
    /*Enter 1st point of line:
    20 15
    Enter 2nd point of line:
    50 70
    Enter translation ration for x and y:
    10 10*/
    int x1,y1,x2,y2,dx,dy;
    cout<<"Enter 1st point of line:"<<endl;
    cin>>x1>>y1;
    cout<<"Enter 2nd point of line:"<<endl;
    cin>>x2>>y2;
    cout<<"Enter translation ratio for x and y:"<<endl;
    cin>>dx>>dy;
    window();
    line(mx+x1,my-y1,mx+x2,my-y2);
    x1=x1+dx;
    y1=y1+dy;
    x2=x2+dx;
    y2=y2+dy;
    setcolor(YELLOW);
    line(mx+x1,my-y1,mx+x2,my-y2);
    departure();
}
void rotation()
{
    /*Input:
    x1=60, y1=20
    degree= 45 or 60
    */
    float x1,y1;
    cout<<"Enter 2nd end point of line:"<<endl;
    cin>>x1>>y1;
    double d,de;
    cout<<"Enter rotation degree:"<<endl;
    cin>>d;
    de=d*M_PI/180.0;
    window();
    line(mx,my,mx+x1,my-y1);
    x1=((x1*cos(de))-(y1*sin(de)));
    y1=((x1*sin(de))+(y1*cos(de)));
    cout<<x1<<" " <<y1;
    setcolor(YELLOW);
    line(mx,my,mx+x1,my-y1);
    departure();
}
void scaling()
{
    /*Input:
    x1=10, y1=10
    x2=10, y2=40
    x3=40, y3=10
    x4=40, y4=40
    Sx=2, Sy=2
    */
    int x1,x2,y1,y2,Sx,Sy;
    cout<<"Enter 1st end point of line:"<<endl;
    cin>>x1>>y1;
    cout<<"Enter 2nd end point of line:"<<endl;
    cin>>x2>>y2;
    cout<<"Enter scaling ratio Sx and Sy:"<<endl;
    cin>>Sx>>Sy;
    window();
    line(mx+x1,my-y1,mx+x1,my-y2);
    line(mx+x1,my-y1,mx+x2,my-y1);
    line(mx+x1,my-y2,mx+x2,my-y2);
    line(mx+x2,my-y1,mx+x2,my-y2);
    x1=x1*Sx;
    x2=x2*Sx;
    y1=y1*Sy;
    y2=y2*Sy;
    setcolor(YELLOW);
    line(mx+x1,my-y1,mx+x1,my-y2);
    line(mx+x1,my-y1,mx+x2,my-y1);
    line(mx+x1,my-y2,mx+x2,my-y2);
    line(mx+x2,my-y1,mx+x2,my-y2);
    departure();
}
void reflection()
{
    /*Enter 1st point of line:
    20 15
    Enter 2nd point of line:
    50 70*/
    float x1,y1,x2,y2;
    cout<<"Enter start point of line:"<<endl;
    cin>>x1>>y1;
    cout<<"Enter end point of line:"<<endl;
    cin>>x2>>y2;
    double d=180.0,de;
    de=d*M_PI/180.0;
    window();
    line(mx+x1,my-y1,mx+x2,my-y2);
    x1=((x1*cos(de))-(y1*sin(de)));
    y1=((x1*sin(de))+(y1*cos(de)));
    x2=((x2*cos(de))-(y2*sin(de)));
    y2=((x2*sin(de))+(y2*cos(de)));
    setcolor(YELLOW);
    line(mx+x1,my-y1,mx+x2,my-y2);
    departure();
}
void shear()
{
    /*Input:
    x1=10, y1=10
    x2=10, y2=40
    x3=40, y3=10
    x4=40, y4=40
    Shx=3, Shy=3
    */
    int x1,y1,x2,y2,x3,y3,x4,y4,Shx,Shy,dir;
    cout<<"Enter 1st point of line for rectangle:"<<endl;
    cin>>x1>>y1;
    cout<<"Enter 2nd point of line for rectangle:"<<endl;
    cin>>x2>>y2;
    cout<<"Enter 3rd point of line for rectangle:"<<endl;
    cin>>x3>>y3;
    cout<<"Enter 4th point of line for rectangle:"<<endl;
    cin>>x4>>y4;
    cout<<"Enter Shear direction:\n 1 for x direction\n 2 for y direction\n 3 for both direction"<<endl;
    cin>>dir;
    if(dir>=1 && dir<=3)
    {
        if(dir==1)
        {
            cout<<"Enter Shx:"<<endl;
            cin>>Shx;
            window();
            line(mx+x1,my-y1,mx+x2,my-y2);
            line(mx+x1,my-y1,mx+x3,my-y3);
            line(mx+x2,my-y2,mx+x4,my-y4);
            line(mx+x3,my-y3,mx+x4,my-y4);
            x1=x1+y1*Shx;
            x2=x2+y2*Shx;
            x3=x3+y3*Shx;
            x4=x4+y4*Shx;
            setcolor(YELLOW);
            line(mx+x1,my-y1,mx+x2,my-y2);
            line(mx+x1,my-y1,mx+x3,my-y3);
            line(mx+x2,my-y2,mx+x4,my-y4);
            line(mx+x3,my-y3,mx+x4,my-y4);
            departure();
        }
        if(dir==2)
        {
            cout<<"Enter Shy:"<<endl;
            cin>>Shy;
            window();
            line(mx+x1,my-y1,mx+x2,my-y2);
            line(mx+x1,my-y1,mx+x3,my-y3);
            line(mx+x2,my-y2,mx+x4,my-y4);
            line(mx+x3,my-y3,mx+x4,my-y4);
            y1=y1+Shy*x1;
            y2=y2+Shy*x2;
            y3=y3+Shy*x3;
            y4=y4+Shy*x4;
            setcolor(YELLOW);
            line(mx+x1,my-y1,mx+x2,my-y2);
            line(mx+x1,my-y1,mx+x3,my-y3);
            line(mx+x2,my-y2,mx+x4,my-y4);
            line(mx+x3,my-y3,mx+x4,my-y4);
            departure();
        }
        if(dir==3)
        {
            cout<<"Enter Shx and Shy:"<<endl;
            cin>>Shx>>Shy;
            window();
            line(mx+x1,my-y1,mx+x2,my-y2);
            line(mx+x1,my-y1,mx+x3,my-y3);
            line(mx+x2,my-y2,mx+x4,my-y4);
            line(mx+x3,my-y3,mx+x4,my-y4);
            x1=x1+y1*Shx;
            x2=x2+y2*Shx;
            x3=x3+y3*Shx;
            x4=x4+y4*Shx;
            y1=y1+Shy*x1;
            y2=y2+Shy*x2;
            y3=y3+Shy*x3;
            y4=y4+Shy*x4;
            setcolor(YELLOW);
            line(mx+x1,my-y1,mx+x2,my-y2);
            line(mx+x1,my-y1,mx+x3,my-y3);
            line(mx+x2,my-y2,mx+x4,my-y4);
            line(mx+x3,my-y3,mx+x4,my-y4);
            departure();
        }
    }
    else
    {
        exit(1);
    }
}
void window()
{
    initwindow(600,400,"Window");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    X=getmaxx();
    Y=getmaxy();
    mx=X/2;
    my=Y/2;
    rectangle(0,0,X,Y);
    line(mx,0,mx,Y);
    line(0,my,X,my);
}
void departure()
{
    while(!kbhit())
    {
        delay(200);
    }
}
int main()
{
    int i;
    cout<<"Enter:\n 1 for translation\n 2 for rotation\n 3 for Scaling\n 4 for reflection\n 5 for shear\n";
    cin>>i;
    while(i>=1&&i<=5)
    {
        if(i==1)
            translation();
        else if(i==2)
            rotation();
        else if(i==3)
            scaling();
        else if(i==4)
            reflection();
        else if(i==5)
            shear();
        else
            exit(1);
    }
    return 0;
}
