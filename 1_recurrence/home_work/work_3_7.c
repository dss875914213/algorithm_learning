#include<stdio.h>

// #define EAT_DAY 10 
// #define EAT_MORE_NUMBER 1
// #define LEAVE_PEACH 1

void main(void)
{
    int peach[1000];//倒数第i天早上的桃子，倒数第EAT_DAY天早上即摘的桃子数
    int EAT_DAY,EAT_MORE_NUMBER,LEAVE_PEACH;
    printf("代表第n天只剩下d个桃子，请输入n,d:  ");scanf("%d,%d",&EAT_DAY,&LEAVE_PEACH);
    printf("每天吃一半有多吃m个，请输入m:  ");scanf("%d",&EAT_MORE_NUMBER);

    peach[1]=LEAVE_PEACH;
    for(int i=2;i<=EAT_DAY;i++)
    {
        peach[i]=(peach[i-1]+EAT_MORE_NUMBER)*2;
        printf("第%d早上有%d个桃子\n",EAT_DAY+1-i,peach[i]);
    }
    printf("最开始摘了%d个桃子",peach[EAT_DAY]);
}








