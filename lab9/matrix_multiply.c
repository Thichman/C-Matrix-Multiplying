#include <stdio.h>
#include "../homework3/matrix.c"


matrix *multiply1(matrix* x, matrix* y)
{

  unsigned rows = x -> rows;
  unsigned columns = y -> columns;

  struct matrix* ret = create_matrix(rows, columns);

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){

      ret -> data[i][j] = x -> data[i][j];

   }
  }

  for(int i = 0; i < y -> rows; i++){
    for(int j = 0; j < y -> columns; j++){

      ret -> data[i][j] = ret -> data[i][j] * y -> data[i][j];

   }
  }

  return ret;










}
