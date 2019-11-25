#include<stdio.h>
int k,m,n,ms,ss,a[100];
void main()
{
    int i,h,wmin,wmax;
    int c(int k);
    printf("请输入和数，最大零数：");scanf("%d %d",&ss,&ms);
    for(h=0,i=1;i<=ms;i++)
    {
        h=h+i;
        if(h>ss)
        {
            wmax=i-1;
            break;
        }
        if(h==ss)
        {
            wmax=i;
            break;
        }
    }
    if(i>ms)
    {
        printf("输入最大零数太小！\n");return;
    }
    for(h=0,i=ms;i>-1;i--)
    {
        h=h+i;
        if(h>ss)
        {
            wmin=ms-i;
            break;
        }
    }
    printf("wmin%d wmax%d\n",wmin,wmax);
    for(m=wmin;m<=wmax;m++)
    {
        c(1);
    }
    printf("n=%d\n",n);
}

int c(int k)
{
    int i,j,t;
    if(k<=m)
    {
        a[0]=0;
        for(i=a[k-1]+1;i<=ms+k-m;i++)
        {
            a[k]=i;
            if(k==m)
            {
                for(t=0,j=m;j>0;j--)
                {
                    t=t+a[j];
                }
                if(t==ss)
                {
                    n++;
                    printf("%d=",ss);
                    for(j=1;j<m;j++)
                    {
                        printf("%2d+",a[j]);
                    }
                    printf("%2d\n",a[m]);
                }
                else
                {
                    printf("%d!=",ss);
                    for(j=1;j<m;j++)
                    {
                        printf("%2d+",a[j]);
                    }
                    printf("%2d\n",a[m]);
                }
                
            }
            else
            {
                c(k+1);
            }
            
        }
    }
    return 0;
}





