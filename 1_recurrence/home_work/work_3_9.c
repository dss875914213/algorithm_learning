#include<stdio.h>

#define F_ITEM 40

int recursive(int *array);
int iteration(int *array);

int recursive(int *array)
{
    int sum=0;
    array[1]=1;
    array[2]=1;
    for(int i=1;i<=F_ITEM;i++)
    {
        if(i>2)
        {
            array[i]=array[i-1]+array[i-2];
        }
        sum+=array[i];
    }
    return sum;
}
int iteration(int *array)
{
    int a,b,sum=0;
    int temp;
    a=1;b=1;sum=a+b;
    for(int i=3;i<=F_ITEM;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        sum+=b;
    }
    *array=b;
    return sum;
}

void main(void)
{
    char mode;
    int array[100];
    int sum=0;
    printf("������1��0,1�����õ��Ʒ�����0�����������");scanf("%d",&mode);
    if(mode==1)
    {
        sum=recursive(array);
    }
    else if(mode==0)
    {
        sum=iteration(&array[F_ITEM]);
    }
    for(int i=1;i<=F_ITEM;i++)
    {
        printf("��%d��Ϊ%d\n",i,array[i]);
    }
    printf("��%dΪ��%d,ǰ%d���ܺ�Ϊ��%d\n",F_ITEM,array[F_ITEM],F_ITEM,sum);
}










