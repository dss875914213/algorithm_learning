#include<stdio.h>

int array[100][100];

int f(int i, int j)
{
    if(i==j||j==1)
    {
        return 1;
    }
    else
    {
        return f(i-1,j)+f(i-1,j-1);
    }
}

int main()
{
    int i, j, k;
    int n;
    printf("ÇëÊäÈënĞĞ£º");scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=40-3*i;k++)
        {
            printf(" ");    
        }
        
        for(j=1;j<=i;j++)
        {
            array[i][j] = f(i,j);
            printf("%6d",i,j,array[i][j]);
        }
        printf("\n");
    }

}











