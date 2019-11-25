#include<stdio.h>
#define ERROR 0
#define OK 1

int array[100]={0};
int sum, max_number;
int add_numbers;
int combination=0;
int add_sum=0;
void c(int k)
{
    int i,j;

    for(i=array[k-1]+1;i<=max_number+k-add_numbers;i++)
    {
        array[k]=i;
        if(k!=add_numbers)
        {
            c(k+1);
        }
        else
        {
            add_sum=0;
            for(j=1;j<=add_numbers;j++)
            {
                add_sum+=array[j];
            }
            if(add_sum==sum)
            {
                combination+=1;
                printf("%d=",sum);
                for(j=1;j<add_numbers;j++)
                {
                    printf("%d+",array[j]);
                }
                printf("%d\n",array[add_numbers]);
            }
        }
        
    }
}

char cal_min_max(int sum, int max_number, int *wmin, int *wmax)
{
    int i;
    int add=0;
    int flag=1;
    printf("%d sum %d max_number",sum,max_number);
    for(i=1;i<=max_number;i++)
    {
        add+=i;
        if(add>sum)
        {
            flag=0;
            *wmax = i-1;
            break;
        }
    }
    if(flag==1)
    {
        printf("输入最大零数太小\n");
        return ERROR;
    }
    
    add=0;
    for(i=max_number;i>=1;i--)
    {
        add+=i;
        if(add>sum)
        {
            *wmin = max_number-i;
            break;
        }
    }
    return OK;
}

void main(void)
{

    int wmin, wmax;
    printf("请输入和数和最大零数: ");scanf("%d %d",&sum,&max_number);
    if(cal_min_max(sum, max_number, &wmin, &wmax)==ERROR)
    {
        return ;
    }
    printf("零数最小和最大分别是：%d %d\n",wmin,wmax);
    for(add_numbers=wmin;add_numbers<=wmax;add_numbers++)
    {
        c(1);
    }
    printf("总共有%d种组合方式\n",combination);
}










