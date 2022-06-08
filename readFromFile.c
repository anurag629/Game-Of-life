#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <sys/stat.h>
#include "header.h"

/* this function reads file and store row to 'r' column to 'c'
    and also stores all other 1 and 0 to dynamically allocated 2d array.*/
void readFromFile(const char *filename, int cycles)
{
    /* two flags for checking conditions*/
    int flag = 0;
    int flagg = 0;
    int r, c; /* row and column*/
    int **TwoDBox = NULL;
    int ii = 0;
    int jj = 0;
    int i;
    int cycle = 0;
    FILE *file;
    FILE *ffile;
    char line[5];

    /* Reading a file for storing row and column*/
    file = fopen(filename, "r"); /* should check the result */

    while (fscanf(file, "%s", line) != EOF)
    {
        if (flag < 2)
        {
            if (flag == 0)
                r = atoi(line);
            if (flag == 1)
                c = atoi(line);
            flag = flag + 1;
        }
    }

    fclose(file);

    /* Closing a file */

    /*dynamically allocating 2d array for storing matrix information */
    TwoDBox = malloc(c * sizeof(int *));
    for (i = 0; i < c; i++)
    {
        TwoDBox[i] = malloc(r * sizeof(int));
    }
    /* Reading a file for matrix */
    ffile = fopen(filename, "r"); /* should check the result */

    while (fscanf(ffile, "%s", line) == 1)
    {
        if (flagg >= 2)
        {

            if (jj < c)
            {

                TwoDBox[ii][jj] = atoi(line);

                jj = jj + 1;
            }
            else
            {
                jj = 0;
                ii = ii + 1;

                TwoDBox[ii][jj] = atoi(line);

                jj = jj + 1;
            }
        }
        else
        {
            flagg = flagg + 1;
        }
    }

    fclose(ffile);

    /* Closing again for reading matrix */

    /* calling drawLife function first time to draw matrix*/
    drawLife(TwoDBox, r, c);
    while (cycle < cycles)
    {
        nextPhase(TwoDBox, r, c);
        drawLife(TwoDBox, r, c);
        cycle = cycle + 1;
    }

    /* Code for further processing and free the
    dynamically allocated memory*/

    if (TwoDBox != NULL)
    {
        free(TwoDBox);
    }
}