#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {
  
  screen s;
  struct matrix *edges;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  edges = new_matrix(4, 4);

  print_matrix(edges);
  
  ident(edges);
  
  print_matrix(edges);

  add_point(edges, 100, 100, 0);
  
  print_matrix(edges);

  add_point(edges, 100, 400, 0);

  print_matrix(edges);

  add_edge(edges, 100, 400, 0, 400, 400, 0);
  add_edge(edges, 400, 400, 0, 400, 100, 0);
  //SEG FAULT HERE BECAUSE OF GROWx

  add_edge(edges, 400, 100, 0, 100, 100, 0);

  print_matrix(edges);

  draw_lines(edges, s, c);
  
  display(s);
  
  free_matrix( edges );
}  
