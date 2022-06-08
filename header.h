#ifndef MY_HEADER
#define MY_HEADER

void readFromFile(const char *filename, int cycles);
int countNeighbour(int **TwoDBox, int r, int c, int ii, int jj);
void drawLife(int **TwoDBox, int r, int c);
void nextPhase(int **TwoDBox, int r, int c);
#endif
