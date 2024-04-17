#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <direct.h>
using namespace std;
void brehenamnLine(int x1, int y1, int x2, int y2)
{
    int dx, dy;
    float m;
    m = (y2 - y1) / (x2 - x1);
    dx = x2 - x1;
    dy = y2 - y1;

    int x, y, x_end, y_end;

    if (m < 1)
    {
        int inc1 = 2 * (dy - dx), inc2 = 2 * dy, d = 2 * dy - dx;
        if (dx < 0)
        {
            x = x2;
            x_end = x1;
            y = y2;
            // c = y-m*x;
            putpixel(x, y, WHITE);
            while (x <= x_end)
            {

                putpixel(x, y, WHITE);
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
            putpixel(x, y, WHITE);
            while (x <= x_end)
            {

                putpixel(x, y, WHITE);
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
            putpixel(x, y, WHITE);
            while (y <= y_end)
            {

                // SetPixel(x,y);
                putpixel(x, y, WHITE);

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
            putpixel(x, y, WHITE);
            while (y <= y_end)
            {
                putpixel(x, y, WHITE);

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
}

void breCircle(int h, int k, int r)
{

    int x, y, d;
    x = 0;
    y = r;
    d = 3 - 2 * r;

    while (x <= y)
    {
        putpixel(x + h, y + k, WHITE);
        putpixel(y + h, x + k, WHITE);
        putpixel(-y + h, x + k, WHITE);
        putpixel(-x + h, y + k, WHITE);

        putpixel(-x + h, -y + k, WHITE);
        putpixel(-y + h, -x + k, WHITE);
        putpixel(y + h, -x + k, WHITE);
        putpixel(x + h, -y + k, WHITE);

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
}

void midCircle(int h, int k, int r)
{
    int x, y, p;
    x = 0;
    y = r;
    p = 1 - r;
    while (x <= y)
    {

        putpixel(x + h, y + k, WHITE);
        putpixel(y + h, x + k, WHITE);
        putpixel(-y + h, x + k, WHITE);
        putpixel(-x + h, y + k, WHITE);

        putpixel(-x + h, -y + k, WHITE);
        putpixel(-y + h, -x + k, WHITE);
        putpixel(y + h, -x + k, WHITE);
        putpixel(x + h, -y + k, WHITE);

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
}

void midCircleArc(int h, int k, int r)
{
    int x, y, p;
    x = 0;
    y = r;
    p = 1 - r;
    if (h == 10 && k == 10)
    {

        while (x <= y)
        {

            putpixel(x + h, y + k, WHITE);
            putpixel(y + h, x + k, WHITE);
            // putpixel(-y+h, x+k, WHITE);
            // putpixel(-x+h, y+k, WHITE);

            // putpixel(-x+h, -y+k, WHITE);
            //  putpixel(-y+h, -x+k , WHITE);
            // putpixel(y+h, -x+k, WHITE);
            // putpixel(x+h , -y+k , WHITE);

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
    }
    if (h  == 11 && k  == 410)
    {
        int x, y, p;
        x = 0;
        y = r;
        p = 1 - r;
        while (x <= y)
        {

            //putpixel(x + h, y + k, WHITE);
            //putpixel(y + h, x + k, WHITE);
            //putpixel(-y + h, x + k, WHITE);
            //putpixel(-x + h, y + k, WHITE);

            //putpixel(-x + h, -y + k, WHITE);
            //putpixel(-y + h, -x + k, WHITE);
            putpixel(y + h, -x + k, WHITE);
            putpixel(x + h, -y + k, WHITE);

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
    }

    if (h  == 610 && k  == 11)
    {
        int x, y, p;
        x = 0;
        y = r;
        p = 1 - r;
        while (x <= y)
        {

            //putpixel(x + h, y + k, WHITE);
            //putpixel(y + h, x + k, WHITE);
            putpixel(-y + h, x + k, WHITE);
            putpixel(-x + h, y + k, WHITE);

            //putpixel(-x + h, -y + k, WHITE);
            //putpixel(-y + h, -x + k, WHITE);
            //putpixel(y + h, -x + k, WHITE);
            //putpixel(x + h, -y + k, WHITE);

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
    }
    if (h  == 611 && k  == 411)
    {
        int x, y, p;
        x = 0;
        y = r;
        p = 1 - r;
        while (x <= y)
        {

            //putpixel(x + h, y + k, WHITE);
            //putpixel(y + h, x + k, WHITE);
            // putpixel(-y + h, x + k, WHITE);
            // putpixel(-x + h, y + k, WHITE);

            putpixel(-x + h, -y + k, WHITE);
            putpixel(-y + h, -x + k, WHITE);
            //putpixel(y + h, -x + k, WHITE);
            //putpixel(x + h, -y + k, WHITE);

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
    }

}

main()
{
    initwindow(700, 700, "Didar Screen");
    int x = 10, y = 10, h, k;
    // cin >> x >> y;
    brehenamnLine(x, y, x + 600, y + 1);             // for top line
    brehenamnLine(x, y, x + 1, y + 400);             // for left line
    brehenamnLine(x + 1, y + 400, x + 601, y + 401); // for bottom line
    brehenamnLine(x + 600, y + 1, x + 601, y + 401); // for right line
    h = round(((x + 600) / 2 + (x + 600) / 2) / 2);
    k = round((y + 1 + y + 400) / 2);

    midCircle(h, k, 100);
    breCircle(h, k, 1); // for center circle

    brehenamnLine(round((x + 600) / 2), y + 1, round((x + 600 + 2) / 2), y + 100);   // Top vertical line on circle
    brehenamnLine(round((x + 600) / 2), y + 300, round((x + 600 + 2) / 2), y + 400); // Bottom vertical line below circle

    brehenamnLine(x, y + 90, x + 105, y + 90);             // left upper goal line
    brehenamnLine(x, y + 90 + 220, x + 105, y + 90 + 220); // left bottom goal line
    brehenamnLine(x + 105, y + 90, x + 106, y + 310);      // left vertical line NOTE here if two point are same then increment some one (x+105 instate x+106)

    brehenamnLine(x + 600 - 105, y + 91, x + 600, y + 91);             // Right upper goal line
    brehenamnLine(x + 600 - 105, y + 90 + 220, x + 600, y + 91);       // Right bottom goal line
    brehenamnLine(x + 600 - 105, y + 91, x + 602 - 105, y + 90 + 220); // Right vertical line.

    midCircleArc(x, y, 10);
    midCircleArc(x+1,y+400,10);
    midCircleArc(x+600,y+1,10);
    midCircleArc(x+601,y+401,10);

    getch();
    // while (!kbhit())
    // {
    //     delay(200);
    // }

    return 0;
}