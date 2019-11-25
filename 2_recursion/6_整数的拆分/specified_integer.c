#include<stdio.h>

#define ERROR 0
#define OK 1

int sum;
int specified_integer[100];
int integer_number;
int wmax,wmin;
int add_number;
int array[100]={0};
int combination=0;

void c(int k)
{
    int i,j;
    int add;
    for(i=array[k-1]+1;i<=integer_number+k-add_number;i++)
    {
        array[k]=i;
        if(k!=add_number)
        {
            c(k+1);
        }
        else
        {
            add=0;
            printf("start\n");
            for(j=1;j<=add_number;j++)
            {
                add+=specified_integer[array[j]-1];
                printf("%d %d %d\n",j,array[j],specified_integer[array[j]-1]);
            }
            printf("end\n");
            if(add==sum)
            {
                combination+=1;
                printf("%d=",sum);
                for(j=1;j<add_number;j++)
                {
                    printf("%d+",specified_integer[array[j]-1]);
                }
                printf("%d\n",specified_integer[array[add_number]-1]);
            }
        }
    }
}

char cal_max_min()
{
    int i;
    int add=0;
    char flag=1;
    for(i=0;i<integer_number;i++)
    {
        add+=specified_integer[i];
        if(add>sum)
        {
            wmax = i;
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("零数太小\n");
        return ERROR;
    }
    add =0;
    for(i=integer_number-1;i>=0;i--)
    {
        add+=specified_integer[i];
        if(add>sum)
        {

            wmin = integer_number-1-i;
            break;
        }
    }
    return OK;
}

void main(void)
{
    int i;
    printf("请输入总和和零数个数");scanf("%d %d",&sum,&integer_number);
    printf("从小到大输入零数");
    for(i=0;i<integer_number;i++)
    {
        printf("请输入第%d个数\n",i+1);
        scanf("%d",&specified_integer[i]);
    }
    cal_max_min();
    printf("%d %d\n",wmax,wmin);
    for(add_number=wmin;add_number<=wmax;add_number++)
    {
        c(1);
    }
    printf("总共有%d中组合",combination);

}











