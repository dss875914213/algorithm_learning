#include<stdio.h>

void main(void)
{
    int n,m;
    int x,y;
    int route[20][20];

    printf("请输入正整数m,n:  ");scanf("%d,%d",&m,&n);
    for(x=0;x<5;x++)
    {
        route[x][0]=1;
    }
    for(x=5;x<=m;x++)
    {
        route[x][0]=0;
    }
    for(y=0;y<=n;y++)
    {
        route[0][y]=1;
    }

    for(x=1;x<=m;x++)
    {
        for(y=1;y<=n;y++)
        {
            if(x==3 && y==2)
            {
                route[x][y]=0;
            }
            else if(x==4 && y==2)
            {
                route[x][y]=0;
            }
            else if(x==4 && y==3)
            {
                route[x][y]=0;
            }
            else if(x==2 && y==4)
            {
                route[x][y]=route[x-1][y];
            }
            else
            {
                route[x][y]=route[x-1][y]+route[x][y-1];
            }   
        }
    }
    printf("从(0,0)到(%d,%d),共有%d条路",m,n,route[m][n]);
}















