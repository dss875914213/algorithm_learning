#include<stdio.h>

double move_stone(int n)
{
    if(n==1)
    {
        return 1;
    }
    return (2*move_stone(n-1)+1);
}

void main(void)
{
    int stone_number;
    double move_times;
    printf("请输入要移动圆盘的个数n:  ");scanf("%d",&stone_number);
    move_times = move_stone(stone_number);
    printf("要移动的次数%.0f\n",move_times);
}






