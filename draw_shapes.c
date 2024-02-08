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
{//looping through the triangle
    for (int row = 0 ; row <= trisize; row++){
      int minCol = triCol + trisize - row;//calculating the minimum column index for the triangle
      int maxCol = triCol + trisize + row;// calculating the maximum column index for the triangle
      int col;
      //looping the print spaces before the triangle
      for (col = 0; col < minCol; col++)
        putchar(' ');
      //loop to print the triangle
      for(        ; col <= maxCol; col++)
	putchar('*');
      putchar('\n');// move to the next line after printing a row 
    }//variables for the square
    int sqcol = triCol + (trisize / 2) +1;//column index for the square
    int sqsize = trisize; //size of square
    //loop for printing the triangle
    for (int row = 0; row < sqsize; row++){
      int col;
      ///loop to print spaces before the square
      for (col = 0; col < sqcol; col++)
          putchar(' ');
      //loop for printing the square
      for(     ; col < sqcol + sqsize; col++)
	putchar('*');
      putchar('\n');//move to the next line after printing a row
    }
}

