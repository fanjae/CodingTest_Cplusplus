#include <stdio.h>
#include <string.h>
int main() {
    int max, val, carry;
    int i,len,len2;
    char a[10050],b[10050];
    int m[10050]={0};
    int n[10050]={0};
    int s[10050]={0};
  
    scanf("%s",a);
    scanf("%s",b);
  
    len=strlen(a);
    len2=strlen(b);
    for(i=0;i<len;i++)
     {
        m[len-i-1]=a[i]-48;
    }
    for(i=0;i<len2;i++)
     {
        n[len2-i-1]=b[i]-48;
    }
  
    max=len;
    if(len2>len) max=len2;
  
    carry=0;
    for(i=0;i<max;i++)
     {
        val=m[i]+n[i]+carry;
        carry=val/10;
        s[i]=val%10;
    }
    if(carry>0)
     {
        s[max]=carry;
        max++;
    }
 
    for(i=0;i<max;i++)
     {
        printf("%d",s[max-i-1]);
    }
 
    return 0;
}