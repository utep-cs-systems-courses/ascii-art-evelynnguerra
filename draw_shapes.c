#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
//printing arrow with the triangle and square
void print_arrow(int triCol, int trisize)
  {
    for (int row = 0 ; row <= trisize; row++){
      int minCol = triCol + trisize - row;
      int maxCol = triCol + trisize + row; 
      int col;
      for (col = 0; col < minCol; col++)
        putchar(' ');
      for(        ; col <= maxCol; col++)
	putchar('*');
        putchar('\n');
   
    int sqcol = triCol + (trisize / 2) +1;
    int sqsize = trisize;
    for (int row = 0; row < sqsize; row++){
      int col;
      for (col = 0; col < sqcol; col++)
          putchar(' ');
      for(     ; col < sqcol + sqsize; col++)
	putchar(' ');
        putchar('\n');
    }
}

