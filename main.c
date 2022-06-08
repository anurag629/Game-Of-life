#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "header.h"

/*  this function checks weather file exist or not*/
int checkIfFileExists(const char *filename)
{
    struct stat buffer;
    int exist = stat(filename, &buffer);
    if (exist == 0)
        return 1;
    else
        return 0;
}

int main(int agrc, char const *argv[])
{

    if (agrc != 3) /* then invalid number of parameters*/
    {
        system("clear"); /*clear output screen*/
        printf("incorrect amount of arguments. Program usage:\n./life <cell_file> <cycles>\n");
    }
    else
    { /* checking weather file exist or not*/
        if (checkIfFileExists(argv[1]))
        {
            readFromFile(argv[1], atoi(argv[2]));
        }
        else
        {
            printf("\nFile does not exist.....");
        }
    }

    return 0;
}
