#include <stdio.h>
#include <algorithm>
using namespace std;
typedef struct my_pair
{
    int value;
    int height;
}my_pair;
int data[105];
int order[105][105];
my_pair my_data[105][105];
int n;
void order_print(int start_point, int end_point)
{
    if(start_point > end_point)
    {
        return ;
    }
    else
    {
        int position = order[start_point][end_point];
        printf("%d %d\n",start_point,position);
        order_print(start_point+1, position-1);
        order_print(position+1, end_point);
    }
}
my_pair connect(int start_point, int end_point)
{
    if(start_point > end_point)
    {
        my_pair temp={0,0};
        return temp;
    }
    if(my_data[start_point][end_point].value != -1)
    {
       return my_data[start_point][end_point];
    }

    int min_value = 21000000, height_temp = 0;
    for(int position=start_point+1; position<=end_point; position++)
    {
        if(data[start_point] != data[position])
        {
            my_pair in = connect(start_point+1, position-1);
            my_pair out = connect(position+1,end_point);
            if(min_value > in.value + out.value + position - start_point + (in.height + 1) * 2) // 현재 position에서 시작 지점 까지 빼서 길이 갱신
            {
                min_value = in.value + out.value + position - start_point + (in.height + 1) * 2;
                height_temp = max(in.height+1,out.height); // 갱신이 되야 높이를 갱신함
                order[start_point][end_point] = position;
            }
        }
    }
    my_data[start_point][end_point].value = min_value;
    my_data[start_point][end_point].height = height_temp;
    return my_data[start_point][end_point];
}
int main(void)
{
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%1d",&data[i]);
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            my_data[i][j].value = -1;
        }
    }
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            connect(i,j);
        }
    }

    printf("%d\n",my_data[1][n]);
    order_print(1,n);
}
