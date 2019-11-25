#include<stdio.h>

int search_max_item(int *a,int *b,int max_num,int n);
int search_max(int n,int *array);

//输入几项，以及保存摆动数列的数组
//返回最大值
int search_max(int n,int *array)
{
    int i;
    int max_num=0;
    array[1]=1;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            array[i]=array[i/2]+1;
        }
        else
        {
            array[i]=array[(i-1)/2]+array[(i+1)/2];
        }
        if(array[i]>max_num)
        {
            max_num=array[i];
        }      
    }
    printf("第%d项是%d，最大值是%d\n",n,array[n],max_num);
    return max_num;
    
}

int search_max_item(int *a,int *b,int max_num,int n)
{
    int i;
    int j=0;
    for(i=2;i<n;i++)
    {
        if(a[i]==max_num)
        {
            b[j]=i;
            j++;
        }
    }
    return j;
}

void main(void)
{
    int n;//有n项
    int max_num;//最大值
    int i;//辅助
    int array[10000];//保存递推数列，下标从1开始
    int max_item_lication[100];//保存最大值位置
    int max_item_number;//有几个最大值

    printf("输入n:(2<n<10000):  ");scanf("%d",&n);

    
    max_num=search_max(n,array);
    max_item_number = search_max_item(array,max_item_lication,max_num,n);
    printf("最大值对应的项为:");
    for(i=0;i<max_item_number;i++)
    {
        printf("%d  ",max_item_lication[i]);
    }
    printf("\n");

}


