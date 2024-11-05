#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <iostream.h>

int main(void)
{
    /* request auto detection */
    int gmode, errorcode;
    int midx, midy;

    /* initialize graphics and local variables */
    randomize();
    int graphdriver = DETECT, graphmode;
    initgraph(&graphdriver, &graphmode, "..\\bgi");
    /* read result of initialization */
    errorcode = graphresult();
    if (errorcode != grOk) /* an error occurred */
    {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1); /* terminate with an error code */
    }
    else
    {

        midx = getmaxx() / 2;
        midy = getmaxy() / 2;

        int trials = 3;
        outtextxy(150, midy, "This is a game developed by URGURU");
        getch();
        cleardevice();
        // outtext("It is slightly different from the one conducted in cpss.In the actual game you have to press a button when you feel the image growing is of same size of the actual image.\nBut here hold any button and wait till you feel the actual image is of same size of the growing image");

        cout << "\n\n\n\t\t\t*****UR GURU*****\n\t1.This game is slightly different\n\t from the one conducted in cpss.\n\t2.In the actual game you have to press a button\n\t when you feel the image growing is of same size of the actual image.\n\t3.But here hold any button and wait till you feel the \n\tactual image is of same size of the growing image";
        cout << "\n\t4.Release the button once you feel both the circles are of same size";
        cout << "\n\t5.Wait for a second and then press any button";
        cout << "\n\t6.The radius of both the circles are shown";
        cout << "\n\t7.Then press any button to continue for the next attempt";
        cout << "\n\t\t\t******All the Best*****";
        getch();
        cout << "\n\n\tHow many trials would you like to try.....?\n\t";
        cin >> trials;

        for (int i = 1; i <= trials; ++i)
        {
            char intasstring[10];
            itoa(i, intasstring, 10);
            cleardevice();
            setfillstyle(1, random(10));
            int temprad = 0.1 * midx + random(0.5 * midx);
            char chartemprad[10];
            itoa(temprad, chartemprad, 10);
            time_t first, second;
            for (int j = 0; j <= (0.6 * midx); ++j)
            {
                first = time(NULL);
                int tempo = midx - 80;
                char temprad2[10];
                itoa(j, temprad2, 10);
                outtextxy(tempo, 20, "Trial No:");
                outtextxy(midx, 20, intasstring);

                fillellipse(midx * 0.5, midy, temprad, temprad);
                fillellipse(midx * 1.5, midy, j, j);
                getch();
                second = time(NULL);
                if (float(difftime(second, first)) > 1)
                {

                    outtextxy(midx - 100, 40, "Trial over.Click for next one");
                    outtextxy(midx * 0.5 - 50, 30, chartemprad);
                    outtextxy(midx * 1.5 - 50, 30, temprad2);
                    getch();
                    cleardevice();
                    break;
                }
            }
            outtextxy(midx - 75, midy - 10, "END OF THE GAME.");
            outtextxy(midx - 225, midy + 10, "SUBSCRIBE TO UR GURU YOUTUBE CHANNEL FOR MORE SUCH CONTENT");
        }
    }
    getch();

    closegraph();

    return 0;
}