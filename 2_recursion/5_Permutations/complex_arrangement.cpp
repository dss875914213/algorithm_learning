#include<stdio.h>

int array[100];
int n,r,m;
int arrange_way=0;
void arrangement(int k)
{
    int i,j;
    int flag;
    int zero_num;
    
    for(i=0;i<=n;i++)
    {
        flag=1;
        array[k]=i;
        for(j=1;j<k;j++)
        {
            if(array[j]==array[k]&&array[j]!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            if(k==m+r)
            {
                zero_num=0;
                for(j=1;j<=k;j++)
                {
                    if(array[j]==0)
                    {
                        zero_num++;
                    }
                }
                if(zero_num==m)
                {
                    arrange_way++;
                    for(j=1;j<=m;j++)
                    {
                        printf("%d  ",array[j]);
                    }
                    printf("\n");
                }

            }
            else
            {
                arrangement(k+1);
            }
        }
                   
    }

}

int main(void)
{
    printf("请输入n,r和m:");scanf("%d %d %d",&n,&r,&m);
    arrangement(1);
    printf("共有%d种组合方式\n",arrange_way);
    return 0;
}















