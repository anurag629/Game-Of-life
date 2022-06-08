#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/* this function is used to draw the matrix */
void drawLife(int **TwoDBox, int r, int c)
{

    int i;
    int j;
    system("clear");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (TwoDBox[i][j] == 1)
                printf("\033[0;100m"); /* dark black colour*/
            else
                printf("\033[0;107m"); /* light white colour*/
            printf(" ");
            printf("\033[0m");
        }

        printf("\n");
    }
    sleep(1);
}