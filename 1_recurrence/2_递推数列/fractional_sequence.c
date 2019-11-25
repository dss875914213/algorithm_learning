#include<stdio.h>

int search_max_number(int *molecule,int *denominator,int n);

#define MAX_N 10000

void main(void)
{
    int n;
    int molecule[MAX_N],denominator[MAX_N];
    int max_item;

    printf("请输入n(2<n<%d)",MAX_N);scanf("%d",&n);
    max_item = search_max_number(molecule,denominator,n);
    for(int i=0;i<n;i++)
    {
        printf("%d/%d\n",molecule[i],denominator[i]);
    }
    printf("最大项为%d,为%d/%d",max_item,molecule[max_item],denominator[max_item]);
}

int search_max_number(int *molecule,int *denominator,int n)
{
    int i,j,k;
    char flag;
    int max_item=0;
    molecule[0]=1;
    denominator[0]=2;
    molecule[1]=3;
    denominator[1]=5;
    for(i=2;i<n;i++)
    {
        for(j=molecule[i-1]+1;j<denominator[i-1];j++)
        {
            flag=1;
            for(k=0;k<i;k++)
            {
                if(j==denominator[k])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                molecule[i]=j;
                break;
            }
        }
        denominator[i]=molecule[i]+i+1;
        if(molecule[max_item]*denominator[i]<molecule[i]*denominator[max_item])
        {
            max_item=i;
        }
    }
    return max_item;
}









