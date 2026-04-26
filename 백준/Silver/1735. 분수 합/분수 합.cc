#include <stdio.h>
 
int GCD(int m1, int n1)
{
    //if (n1 == 0){ return  m1; }
    //else GCD(n1, m1%n1);
 
    return n1 == 0 ? m1 : GCD(n1, m1%n1);
 
}
 
int main(void)
{
 
    int a, b, c, d;
    int m, n, gcd;
 
    scanf("%d%d%d%d", &a, &b, &c, &d);
    m = a*d + c*b;
    n = b*d;
    gcd = GCD(m, n);
    printf("%d %d", m / gcd, n / gcd);
 
}