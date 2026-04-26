#include <stdio.h>
using namespace std;
int main() {
    int x, y, a, b;
    scanf("%d %d",&x,&y);
    
    a = (x + y) / 2;
    b = (x - y) / 2;

    if ((x+y)% 2!= 0 || (x-y)%2 != 0)
    {
        printf("-1\n");
    }
    else
    {
        if (a >= 0 && b >= 0)
        {
            if (a >= b)
            {
                printf("%d %d\n",a,b);
            }
            else
            {
                printf("%d %d\n",b,a);
            }
        }
        else
        {
             printf("-1\n");
        }
    }
}
