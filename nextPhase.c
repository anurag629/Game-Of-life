#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "header.h"
/* this function is used to change the next phase of the cycle */
void nextPhase(int **TwoDBox, int r, int c)
{
    int i;
    int j;
    int neighbour;
    /* dynamically allocated 2d array for storing the next phase before chnaging the main two d array*/
    int **TwoDBox2 = NULL;
    TwoDBox2 = malloc(c * sizeof(int *));
    for (i = 0; i < c; i++)
    {
        TwoDBox2[i] = malloc(r * sizeof(int));
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        { /* counting the number of alive neighbour present */
            neighbour = countNeighbour(TwoDBox, r, c, i, j);

            if (TwoDBox[i][j] == 1 && (neighbour == 2 || neighbour == 3))
            {
                TwoDBox2[i][j] = 1;
            }
            else if (TwoDBox[i][j] == 0 && neighbour == 3)
            {
                TwoDBox2[i][j] = 1;
            }
            else
            {
                TwoDBox2[i][j] = 0;
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            TwoDBox[i][j] = TwoDBox2[i][j];
        }
    }

    if (TwoDBox2 != NULL)
    {
        free(TwoDBox2);
    }
}