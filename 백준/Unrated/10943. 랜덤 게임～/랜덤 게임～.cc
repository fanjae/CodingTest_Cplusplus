#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));

    int temp = (rand() % 10) + 1;
    printf("%d",temp);
}