#include<stdio.h>

int array[100]={0};
int n,m;
int arrange_way=0;
void arrangement(int k)
{
    int i,j;
    int flag;
    
    for(i=array[k-1]+1;i<=n-m+k;i++)
    {
        array[k]=i;
        if(k==m)
        {
            arrange_way++;
            for(j=1;j<=m;j++)
            {
                printf("%d  ",array[j]);
            }
            printf("\n");
        }
        else
        {
            arrangement(k+1);
        }          
    }

}

void main(void)
{
    printf("请输入n和m:");scanf("%d %d",&n,&m);
    arrangement(1);
    printf("共有%d种组合方式\n",arrange_way);
}















