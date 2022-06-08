/* this function is used to count the alive neighbour elements*/
int countNeighbour(int **TwoDBox, int r, int c, int ii, int jj)
{

    int count = 0;
    if (ii == 0)
    {
        if (jj == 0)
        {
            if (TwoDBox[ii][jj + 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj] == 1)
                count++;
            if (TwoDBox[ii + 1][jj + 1] == 1)
                count++;
        }
        else if (jj == r - 1)
        {
            if (TwoDBox[ii][jj - 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj] == 1)
                count++;
            if (TwoDBox[ii + 1][jj - 1] == 1)
                count++;
        }
        else
        {
            if (TwoDBox[ii][jj - 1] == 1)
                count++;
            if (TwoDBox[ii][jj + 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj] == 1)
                count++;
            if (TwoDBox[ii + 1][jj - 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj + 1] == 1)
                count++;
        }
    }
    else if (ii == r - 1)
    {
        if (jj == 0)
        {
            if (TwoDBox[ii - 1][jj] == 1)
                count++;
            if (TwoDBox[ii - 1][jj + 1] == 1)
                count++;
            if (TwoDBox[ii][jj + 1] == 1)
                count++;
        }
        else if (jj == r - 1)
        {
            if (TwoDBox[ii][jj - 1] == 1)
                count++;
            if (TwoDBox[ii - 1][jj - 1] == 1)
                count++;
            if (TwoDBox[ii - 1][jj] == 1)
                count++;
        }
        else
        {
            if (TwoDBox[ii][jj - 1] == 1)
                count++;
            if (TwoDBox[ii - 1][jj - 1] == 1)
                count++;
            if (TwoDBox[ii - 1][jj] == 1)
                count++;
            if (TwoDBox[ii - 1][jj + 1] == 1)
                count++;
            if (TwoDBox[ii][jj + 1] == 1)
                count++;
        }
    }
    else
    {
        if (jj == 0)
        {
            if (TwoDBox[ii - 1][jj] == 1)
                count++;
            if (TwoDBox[ii - 1][jj + 1] == 1)
                count++;
            if (TwoDBox[ii][jj + 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj + 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj] == 1)
                count++;
        }
        else if (jj == r - 1)
        {
            if (TwoDBox[ii - 1][jj] == 1)
                count++;
            if (TwoDBox[ii - 1][jj - 1] == 1)
                count++;
            if (TwoDBox[ii][jj - 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj - 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj] == 1)
                count++;
        }
        else
        {
            if (TwoDBox[ii - 1][jj - 1] == 1)
                count++;
            if (TwoDBox[ii - 1][jj] == 1)
                count++;
            if (TwoDBox[ii - 1][jj + 1] == 1)
                count++;
            if (TwoDBox[ii][jj - 1] == 1)
                count++;
            if (TwoDBox[ii][jj + 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj - 1] == 1)
                count++;
            if (TwoDBox[ii + 1][jj] == 1)
                count++;
            if (TwoDBox[ii + 1][jj + 1] == 1)
                count++;
        }
    }

    return count;
}