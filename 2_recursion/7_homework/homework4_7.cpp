#include<stdio.h>
#include<math.h>

int m,n;
int array[100][100];

void t(int start_row_rolumn,int size,int start_number)
{
    int temp_row=start_row_rolumn,temp_column=start_row_rolumn;
    int j;
    if(size<=0)
    {
        return ;
    }
    if(size==1&&m==n)
    {
        array[temp_row][temp_column]=start_number;
    }
    for(j=1;j<=n+1-2*start_row_rolumn;j++)
    {
        array[temp_row][temp_column]=start_number;
        start_number++;
        temp_column++;
    }
    for(j=1;j<=m+1-2*start_row_rolumn;j++)
    {
        array[temp_row][temp_column]=start_number;
        start_number++;
        temp_row++;
    }
    for(j=1;j<=n+1-2*start_row_rolumn;j++)
    {
        array[temp_row][temp_column]=start_number;
        start_number++;
        temp_column--;
        if(start_number>m*n)
        {
            break;
        }
    }
    for(j=1;j<=m+1-2*start_row_rolumn;j++)
    {
        array[temp_row][temp_column]=start_number;
        start_number++;
        temp_row--;
        if(start_number>m*n)
        {
            break;
        }
    }
    t(start_row_rolumn+1,size-2,start_number);
}

int main()
{
    int i,j;
    int s;
    printf("«Î ‰»Îm,n:");scanf("%d %d",&m,&n);
    s=fmin(m,n);
    t(1,s,1);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%3d ",array[i][j]);
        }
        printf("\n");
    }
}












