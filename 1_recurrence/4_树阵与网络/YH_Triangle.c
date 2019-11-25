#include<stdio.h>

void main(void)
{
    int n;
    int i,j,k;
    int array[20][20];
    printf("输出n行杨辉三角,请输入n");scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=3*(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                array[i][j]=1;
            }
            else
            {
                array[i][j]=array[i-1][j-1]+array[i-1][j];
            }
            printf("%6d",array[i][j]);
        }
        printf("\n");
    }

}