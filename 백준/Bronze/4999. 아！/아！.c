#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[1005];
    char b[1005];
    gets(a);
    gets(b);
    printf("%s",strlen(a)<strlen(b)? "no" : "go");
 }