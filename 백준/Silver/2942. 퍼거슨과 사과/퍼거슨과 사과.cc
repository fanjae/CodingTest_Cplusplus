#include <stdio.h>
 
int GCD(int m, int n)
{
    int t;
    while (n != 0)
    {
        t = m;
        m = n;
        n = t%n;
        if (n == 0)
        {
            return m;
        }
    }
}
 
int main(void)
{
    int a, b;
    int gcd;
    int i;
 
    scanf("%d%d", &a, &b);
    gcd = GCD(a, b);
 
    for (i = 1; i <= gcd; i++)
    {
        if (gcd%i == 0) printf("%d %d %d\n", i, a/i, b/i);
 
    }
}