#include <stdio.h>
#include "factorial.c"
#include "matrix_multiply.c"


int main()
{
  factorial(20);
  struct matrix* x = create_matrix(6,6);
  struct matrix* y = create_matrix(5,5);
  for(int i = 0; i < x -> rows; i++){
   for(int j = 0; j < x -> columns; j++){

    x -> data[i][j] = 6;


   }
  }
  for(int i = 0; i < y -> rows; i++){
   for(int j = 0; j < y -> columns; j++){

    y -> data[i][j] = 5;


   }
  }
  struct matrix* test = multiply1(x,y);
  print_matrix(test);





}
