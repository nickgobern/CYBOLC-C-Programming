#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(void)
{
  srand((unsigned)time(NULL));
  int x0 = rand()%100;
  int y0 = rand()%100;
  int x1 = rand()%100;
  int y1 = rand()%100;

  /* Student Implementation */
 int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
  int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1; 
  int err = (dx>dy ? dx : -dy)/2, e2;
 
  for(;;){
    printf(("%d,%d\n"),x0,y0);
    if (x0==x1 && y0==y1) break;
    e2 = err;
    if (e2 >-dx) { err -= dy; x0 += sx; }
    if (e2 < dy) { err += dx; y0 += sy; }
  }
  return EXIT_SUCCESS;
}
