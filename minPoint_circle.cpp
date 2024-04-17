#include <bits/stdc++.h>
#include <graphics.h>
#include <dos.h>
using namespace std;
main()
{
    initwindow(800, 800, "Mid Point Circle Drawing Algorithm Lab_3 By Didar");
    int x, y, p, r, h, k;
    float m, xf, fy, c;
    cout<<"Enter the vlaue of h:";
    cin >> h;
    cout<<"\nEnter the vlaue of k:";
    cin>>k;
    cout << "Enter the Radius:";
    cin >> r;
    x = 0;
    y = r;
    p = 1 - r;

    // int x,y,x_end,y_end;
    int xx = getmaxx();
    int yy = getmaxy();
    int x0 = xx / 2;
    int y0 = yy / 2;
    rectangle(0, 0, xx, yy);
    line(x0, 0, x0, yy);
    line(0, y0, xx, y0);
    x0 += h;
    y0 += k;
    while (x <= y)
    {

        putpixel(x + x0, y + y0, WHITE);
        putpixel(y + x0, x + y0, WHITE);
        putpixel(-y + x0, x + y0, WHITE);
        putpixel(-x + x0, y + y0, WHITE);

        putpixel(-x + x0, -y + y0, WHITE);
        putpixel(-y + x0, -x + y0, WHITE);
        putpixel(y + x0, -x + y0, WHITE);
        putpixel(x + x0, -y + y0, WHITE);

        if (p < 0)
        {
            p = p + 2 * x + 3;
        }
        else
        {
            p = p + 2 * (x - y) + 5;
            y--;
        }
        x++;
    }

    getch();
    return 0;
}