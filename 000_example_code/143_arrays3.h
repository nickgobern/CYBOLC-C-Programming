#pragma once
#include<time.h>

#define BEGIN_PROFILE { \
    clock_t start, end; \
    start = clock();

#define END_PROFILE \
    end = clock(); \
    float seconds = ((float)(end-start)/CLOCKS_PER_SEC); \
    printf("%f seconds\n",seconds); }


