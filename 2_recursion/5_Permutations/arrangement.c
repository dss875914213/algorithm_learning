#include<stdio.h>

int array[100];
int n,m;
int arrange_way=0;
void arrangement(int k)
{
    int i,j;
    int flag;
    
    for(i=0;i<n;i++)
    {
        printf("k=%d\n",k);
        flag=1;
        array[k]=i;
        for(j=0;j<k;j++)
        {
            if(array[j]==array[k])
            {

                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            if(k==m-1)
            {
                arrange_way++;
                for(j=0;j<m;j++)
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

}

void main(void)
{
    printf("请输入n和m:");scanf("%d %d",&n,&m);
    arrangement(0);
    printf("共有%d种排列方式\n",arrange_way);
}















