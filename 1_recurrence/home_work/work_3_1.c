#include<stdio.h>

#define ITEM_NUMBER 20

void main(void)
{
    int array[21];
    int sum=0;
    array[1]=1;
    array[2]=2;
    for(int i=1;i<=ITEM_NUMBER;i++)
    {
        if(i>2)
        {
            array[i]=3*array[i-1]-array[i-2];
        }
        printf("第%d项为%d\n",i,array[i]);
        sum+=array[i];
    }
    printf("第%d项为%d,前%d项和为%d\n",ITEM_NUMBER,array[ITEM_NUMBER],ITEM_NUMBER,sum);

}










