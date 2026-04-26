#include<stdio.h>
int swapnum(int num_temp)   
{
    int num_next=NULL;  
 
    while(num_temp>0)        
    {
        num_next*=10;           
        num_next+=num_temp%10;
        num_temp/=10;           
    }
    return num_next;
}
 
int main(void)
{
    int repeat=NULL;    
    int num1,num2;
    num1=num2=NULL;
    
    scanf("%d %d",&num1,&num2);
    num1 = swapnum(num1);
    num2 = swapnum(num2);
    printf("%d\n",num1>num2?num1:num2);
    return 0;
}