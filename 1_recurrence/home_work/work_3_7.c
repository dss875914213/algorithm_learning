#include<stdio.h>

// #define EAT_DAY 10 
// #define EAT_MORE_NUMBER 1
// #define LEAVE_PEACH 1

void main(void)
{
    int peach[1000];//������i�����ϵ����ӣ�������EAT_DAY�����ϼ�ժ��������
    int EAT_DAY,EAT_MORE_NUMBER,LEAVE_PEACH;
    printf("�����n��ֻʣ��d�����ӣ�������n,d:  ");scanf("%d,%d",&EAT_DAY,&LEAVE_PEACH);
    printf("ÿ���һ���ж��m����������m:  ");scanf("%d",&EAT_MORE_NUMBER);

    peach[1]=LEAVE_PEACH;
    for(int i=2;i<=EAT_DAY;i++)
    {
        peach[i]=(peach[i-1]+EAT_MORE_NUMBER)*2;
        printf("��%d������%d������\n",EAT_DAY+1-i,peach[i]);
    }
    printf("�ʼժ��%d������",peach[EAT_DAY]);
}








