/*
Enter Number of lines:
1
Enter Xmax and Ymax point:
40 40
Enter Xmin and Ymin point:
10 10
Enter X values:
20 50
Enter Y values:
50 20
*/
#include<iostream>
#include<graphics.h>
#include<cmath>
#include<dos.h>
using namespace std;

int main()
{
    int i,j,k=0,l=0,X,Y,MX,MY,m,n;
    bool b,d;
    float dx,dy,slop,Xmax,Ymax,Xmin,Ymin;
    cout<<"Enter Number of lines:"<<endl;
    cin>>n;
    m=n*2;
    int arr[n][4];
    float x[m],y[m];
    cout<<"Enter Xmax and Ymax point:"<<endl;
    cin>>Xmax>>Ymax;
    cout<<"Enter Xmin and Ymin point:"<<endl;
    cin>>Xmin>>Ymin;
    cout<<"Enter X values:"<<endl;
    for(i=0; i<m; i++)
        cin>>x[i];
    cout<<"Enter Y values:"<<endl;
    for(i=0; i<m; i++)
        cin>>y[i];
    initwindow(600,400,"Window");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    X=getmaxx();
    Y=getmaxy();
    MX=X/2;
    MY=Y/2;
    rectangle(0,0,X,Y);
    line(MX,0,MX,Y);
    line(0,MY,X,MY);
    line(MX+Xmin,MY-Ymin,MX+Xmin,MY-Ymax);
    line(MX+Xmin,MY-Ymin,MX+Xmax,MY-Ymin);
    line(MX+Xmin,MY-Ymax,MX+Xmax,MY-Xmax);
    line(MX+Xmax,MY-Ymin,MX+Xmax,MY-Xmax);
    setcolor(RED);
    line(MX+x[0],MY-y[0],MX+x[1],MY-y[1]);
    for(i=m-1; i>=0; i=i-2)
    {
        dx=x[i]-x[i-1];
        dy=y[i]-y[i-1];
    }
    slop=dy/dx;
    for(i=0; i<m; i++)
    {
        if(y[i]>=Ymax)
            arr[i][0]=1;
        else
            arr[i][0]=0;
        if(y[i]<=Ymin)
            arr[i][1]=1;
        else
            arr[i][1]=0;
        if(x[i]>=Xmax)
            arr[i][2]=1;
        else
            arr[i][2]=0;
        if(x[i]<=Xmin)
            arr[i][3]=1;
        else
            arr[i][3]=0;
    }
    for(i=0; i<m; i=i+2)
    {
        for(j=0; j<4; j++)
        {
            b=arr[i][j]|arr[i+1][j];
            if(b==0)
            {
                k++;
            }
        }
    }
    if(k==4)
    {
        cout<<"This line is visible."<<endl;
        exit(1);
    }
    else
    {
        for(i=0; i<m; i=i+2)
        {
            for(j=0; j<4; j++)
            {
                d=arr[i][j]&arr[i+1][j];
                if(d==0)
                {
                    l++;
                }
            }
        }
    }
    if(l==4)
    {
        cout<<"This line is Clipping Candidate."<<endl;
        for(i=0; i<m; i++)
        {
            if(arr[i][0]==1)
            {
                x[i]=x[i]+(Ymax-y[i])/slop;
                y[i]=Ymax;
            }
            if(arr[i][1]==1)
            {
                x[i]=x[i]+(Ymin-y[i])/slop;
                y[i]=Ymin;
            }
            if(arr[i][2]==1)
            {
                y[i]=y[i]+slop*(Xmax-x[i]);
                x[i]=Xmax;
            }
            if(arr[i][3]==1)
            {
                y[i]=y[i]+slop*(Xmin-x[i]);
                x[i]=Xmin;
            }
        }
        cout<<"Clipped line coordinate:"<<endl;
        for(i=0; i<m; i++)
        {
            cout<<x[i]<<"      "<<y[i]<<endl;
        }
        delay(5000);
        setcolor(YELLOW);
        line(MX+x[0],MY-y[0],MX+x[1],MY-y[1]);
    }
    else
    {
        cout<<"This line is Invisible:"<<endl;
        exit(1);
    }
    while(!kbhit())
    {
        delay(50);
    }
    return 0;
}


