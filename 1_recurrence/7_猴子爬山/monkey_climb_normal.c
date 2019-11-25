#include<stdio.h>

void climb_init(int climb_way_number,int *step_size,int *climb_way)
{
    int i,j,k;
    for(i=1;i<=climb_way_number;i++)
    {
        for(j=step_size[i-1]+1;j<=step_size[i];j++)
        {
            if(i==1)
            {
                climb_way[j]=0;
            }
            else
            {
                for(k=1;k<i;k++)
                {
                    climb_way[j]+=climb_way[j-step_size[k]];
                }
            }
            
        }
        climb_way[step_size[i]]+=1;
    }
    for(i=1;i<=climb_way_number;i++)
    {
        printf("%d %d\n",i,climb_way[i]);
    }
}

void main(void)
{
    int step_number;
    int climb_way_number;
    int step_size[100]={0};
    int climb_way[10000];
    printf("请输入台阶数");scanf("%d",&step_number);
    printf("请输入跨步方方式");scanf("%d",&climb_way_number);
    for(int i=1;i<=climb_way_number;i++)
    {
        printf("第%d种跨步方式，可以跨几个台阶",i+1);scanf("%d",&(step_size[i]));
    }
    climb_init(climb_way_number, step_size, climb_way);
    for(int i=step_size[climb_way_number]+1;i<=step_number;i++)
    {
        for(int j=1;j<=climb_way_number;j++)
        {
            climb_way[i]+=climb_way[i-step_size[j]];
        }
    }
    printf("爬到台阶%d，共有%d种爬法",step_number,climb_way[step_number]);

}














