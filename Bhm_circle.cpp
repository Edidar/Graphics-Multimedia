#include <bits/stdc++.h>
#include <graphics.h>
#include <dos.h>
using namespace std;
main()
{
    initwindow(800, 800, "Bresenhum Circle Drawing Algorithm Lab_3 By Didar");
    int x, y, r, d;
    int xx = getmaxx();
    int yy = getmaxy();
    int x0 = xx / 2;
    int y0 = yy / 2;
    int h, k;
    cout<<"Enter the vlaue of h:";
    cin >> h;
    cout<<"\nEnter the vlaue of k:";
    cin>>k;
    rectangle(0, 0, xx, yy);
    line(x0, 0, x0, yy);
    line(0, y0, xx, y0);
    cout << "Enter the Radius:";
    cin >> r;
    x = 0;
    y = r;
    d = 3 - 2 * r;
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

        if (d < 0)
        {
            d = d + 4 * x + 6;
        }
        else
        {
            d = d + 4 * (x - y) + 10;
            y--;
        }
        x++;
    }

    // int x,y,x_end,y_end;

    getch();
    return 0;
}