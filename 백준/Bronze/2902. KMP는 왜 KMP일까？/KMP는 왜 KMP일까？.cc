#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char a[105];
    scanf("%s",a);
    for(int i=0; i<=strlen(a); i++)
        if(isupper(a[i]))
        printf ("%c",a[i]);
}