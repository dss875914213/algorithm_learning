#include<stdio.h>
#include<math.h>
int array[100][100];

int main()
{
    int i,j,k;
    int n,m;
    int s;
    int start_row_column=0;
    int number=1;
    int temp_row,temp_column;
    printf("ÇëÊäÈëmÐÐ,nÁÐ£º");scanf("%d %d",&m,&n);
    s=fmin(m,n);
    for(i=s;i>=1;i-=2)
    {
        start_row_column++;
        temp_row=start_row_column;
        temp_column=start_row_column;
        if(s==1&&m==n)
        {
            array[temp_row][temp_column]=number;
            break;
        }
        for(j=1;j<=n+1-2*start_row_column;j++)
        {
            array[temp_row][temp_column]=number;
            number++;
            temp_column++;
        }
        for(j=1;j<=m+1-2*start_row_column;j++)
        {
            array[temp_row][temp_column]=number;
            number++;
            temp_row++;
        }
        for(j=1;j<=n+1-2*start_row_column;j++)
        {
            array[temp_row][temp_column]=number;
            number++;
            temp_column--;
            if(number>m*n)
            {
                break;
            }  
        }
        for(j=1;j<=m+1-2*start_row_column;j++)
        {
            array[temp_row][temp_column]=number;
            number++;
            temp_row--;
            if(number>m*n)
            {
                break;
            }  
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%3d ",array[i][j]);
        }
        printf("\n");
    }

}

















