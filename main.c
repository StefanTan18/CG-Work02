#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {
  
  screen s;
  struct matrix *m1, *m2;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  m1 = new_matrix(4, 4);
  m2 = new_matrix(4, 2);

  printf("\nPrinting out intialized matrices...\n");
  printf("m1 =\n");
  print_matrix(m1);
  printf("m2 =\n");
  print_matrix(m2);
  
  printf("Testing add_edge. Adding (1, 2, 3), (4, 5, 6) m2 =\n");
  add_edge(m2, 1, 2, 3, 4, 5, 6);
  print_matrix(m2);

  printf("Testing ident. m1 =\n");
  ident(m1);
  print_matrix(m1);

  printf("Testing Matrix mult. m1 * m2 =\n");
  matrix_mult(m2, m1);
  print_matrix(m2);

  printf("Testing Matrix mult. m1 =\n");
  add_edge(m1, 1, 2, 3, 4, 5, 6);
  add_edge(m1, 7, 8, 9, 10, 11, 12);
  print_matrix(m1);

  printf("Testing Matrix mult. m1 * m2 =\n");
  matrix_mult(m1, m2);
  print_matrix(m2);
  
  //display(s);
  
  free_matrix( m1 );
  free_matrix( m2 );
}  
