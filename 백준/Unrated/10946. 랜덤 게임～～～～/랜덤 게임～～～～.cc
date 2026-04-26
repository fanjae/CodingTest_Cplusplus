#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
 
    int temp = (rand() % INT_MAX) + 1;
    printf("%d",temp);
}