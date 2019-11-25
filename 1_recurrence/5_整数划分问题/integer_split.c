#include<stdio.h>

void main(void)
{
    int s;
    int split_number[30];
    int split_way[21][800][21];
    int i,j,k;

    printf("请输入s:  ");scanf("%d",&s);
    
    split_number[2]=2;
    split_way[2][1][1]=1;split_way[2][1][2]=1;split_way[2][2][1]=2;
    for(i=3;i<=s;i++)
    {
        split_number[i]=split_number[i-1];
        for(j=1;j<=split_number[i-1];j++)
        {
            split_way[i][j][1]=1;
            for(k=1;k<i;k++)
            {
                split_way[i][j][k+1]=split_way[i-1][j][k];
            }
        }

        for(j=1;j<=split_number[i-1];j++)
        {
            if(split_way[i-1][j][1]<split_way[i-1][j][2])
            {
                split_number[i]+=1;
                split_way[i][split_number[i]][1]=split_way[i-1][j][1]+1;

                for(k=2;k<=i;k++)
                {
                    split_way[i][split_number[i]][k]=split_way[i-1][j][k];
                }
                
            }
        }

        split_number[i]+=1;
        split_way[i][split_number[i]][1]=i;
        printf("%d %d\n",i,split_number[i]);
    }
    for(j=1;j<=split_number[s];j++)
    {
        k=1;
        while(split_way[s][j][k]>0)
        {
            printf("%d  ",split_way[s][j][k]);
            k++;
        }
        printf("\n");
    }
    printf("%d共有%d种分法\n",s,split_number[s]);
}







