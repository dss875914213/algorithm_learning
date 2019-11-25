#include<stdio.h>
int move_times=0;

void show_move_way(char a,char b);

void move_stone(int n,char start,char help,char end)
{
    if(n==1)
    {
        show_move_way(start,end);
    }
    else
    {
        move_stone(n-1,start,end,help);
        show_move_way(start,end);
        move_stone(n-1,help,start,end);
    }
    
}

void show_move_way(char a,char b)
{
    move_times++;
    printf("%c->%c ",a,b);
}

void main(void)
{
    int stone_number;
    printf("������Ҫ�ƶ�Բ�̵ĸ���n:  ");scanf("%d",&stone_number);
    move_stone(stone_number,'A','B','C');
    printf("\nһ���ƶ�%d��",move_times);
}






