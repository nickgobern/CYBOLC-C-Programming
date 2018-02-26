#pragma once
#include<time.h>
#include<stdlib.h>

void init_array(int* array)
{
  time_t t;
  srand((unsigned)time(&t));
  int i;
  for(i = 0; i < 100; i++)
  {
    array[i] = rand()%100+1;
  }
}
