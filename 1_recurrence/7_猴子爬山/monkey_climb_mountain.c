#include<stdio.h>

void main(void)
{
    int step_number;
    int i;
    int climb_way[10000];
    printf("������̨����n:(0<n<10000)");scanf("%d",&step_number);
    climb_way[1]=1;climb_way[2]=1;climb_way[3]=2;
    for(i=4;i<=step_number;i++)
    {
        climb_way[i]=climb_way[i-1]+climb_way[i-3];
    }
    printf("̨����Ϊ%dʱ����%d������",step_number,climb_way[step_number]);
}









