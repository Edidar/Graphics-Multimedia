#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
using namespace std;
main()
{
    initwindow(800, 800, "Didar Screen");
    //setbkcolor(WHITE);
    int x1, y1, x2, y2, dx, dy;
    float m, xf, fy, c;
    cout << "Enter the point:\n";
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    m = (y2 - y1) / (x2 - x1);
    dx = x2 - x1;
    dy = y2 - y1;

    int x, y, x_end, y_end;
    int xx = getmaxx();
    int yy = getmaxy();
    int x0 = xx / 2;
    int y0 = yy / 2;
    rectangle(0, 0, xx, yy);
    line(x0, 0, x0, yy);
    line(0, y0, xx, y0);
    if (m < 1)
    {
        int inc1 = 2 * (dy - dx), inc2 = 2 * dy, d = 2 * dy - dx;
        if (dx < 0)
        {
            x = x2;
            x_end = x1;
            y = y2;
            // c = y-m*x;
            putpixel(x + x0, y + y0, WHITE);
            while (x <= x_end)
            {

                putpixel(x + x0, y + y0, WHITE);
                // y =round(m*x+c);
                if (d < 0)
                {
                    d = d + inc1;
                }
                else
                {
                    d = d + inc2;
                    y++;
                }
                x++;
            }
        }
        else
        {
            x = x1;
            x_end = x2;
            y = y1;
            // c = y-m*x
            putpixel(x + x0, y + y0, WHITE);
            while (x <= x_end)
            {

                putpixel(x + x0, y + y0, WHITE);
                // y =round(m*x+c);
                if (d <= 0)
                {
                    d = d + inc1;
                }
                else
                {
                    d = d + inc2;
                    y++;
                }
                x++;
            }
        }
    }

    if (m > 1)
    {
        int inc1 = 2 * (dx - dy), inc2 = 2 * dx, d = 2 * dx - dy;
        if (dy < 0)
        {
            y = y2;
            y_end = y1;
            x = x2;
            // c = y-m*x;
            putpixel(x + x0, y + y0, WHITE);
            while (y <= y_end)
            {

                // SetPixel(x,y);
                putpixel(x + x0, y + y0, WHITE);

                if (d <= 0)
                {
                    d = d + inc1;
                }
                else
                {
                    d = d + inc2;
                    x++;
                }
                y++;
            }
        }
        else
        {
            y = y1;
            y_end = y2;
            x = x1;
            // c = y-m*x;
            putpixel(x + x0, y + y0, WHITE);
            while (y <= y_end)
            {
                putpixel(x + x0, y + y0, WHITE);

                if (d <= 0)
                {
                    d = d + inc1;
                }
                else
                {
                    d = d + inc2;
                    x++;
                }
                y++;
            }
        }
    }

    getch();
    return 0;
}