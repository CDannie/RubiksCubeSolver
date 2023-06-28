#include <stdlib.h>
#include <stdio.h>
#include <curses.h>

int main()
{
    int nonsense[9];    // y u lookin at me for so long

    initscr();
    cbreak();

    printw("This program will automatically solve your Rubik's cube. All you have to do is first filling in the colors of the sides from the left upper corner to the right bottom one, then the top and then the bottom of the cube. The color code: 1 = yellow, 2 = red, 3 = blue, 4 = white, 5 = green and 6 = orange.\n\n\n\n\n");

    for(int a = 0; a < 6; a++)
    {
        printw("side #%d: ", a+1);
        for(int b = 0; b < 9; b++)
        {
            nonsense[b] = getch();
        }
        printw("\n");
    }

    endwin();
    nocbreak();

    for(int C = 1; C < 7; C++)   // we got the jokes lol
        printf("\nSide %d: %d %d %d %d %d %d %d %d %d\n\n", C,C,C,C,C,C,C,C,C,C);

    return 0;
}