#include<stdio.h>

int main()
{
        int number[100] = {0};
        int i, num, sum = 0, max = 0, cnt = 0;

        for(i = 0 ;i < 10; i++){
                scanf("%d", &num);//입력받기
                sum+=num;//평균계산을 위한 합계 계산
                number[num/10] ++;
                if( num/10 > cnt) cnt = num/10;
        }
 
        for(i = 0;i<cnt;i++)
                if (number[i] > max) max = i;

        printf("%d\n%d", sum/10, max*10);
        return 0;
}