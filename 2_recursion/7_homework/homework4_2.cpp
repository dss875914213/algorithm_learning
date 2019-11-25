#include<stdio.h>

int array[100];

int f(int i)
{
    if(i==1||i==2)
    {
        array[i]=1;
        return array[i];
    }
    else
    {
        array[i]=f(i-1)+f(i-2);
        return array[i];
    }
    
}

int main()
{
    int n;
    int i;
    int sum=0;
    printf("请输入n：");scanf("%d",&n);
    f(n);
    for(i=1;i<=n;i++)
    {
        sum+=array[i];
        printf("%d %d\n",i,array[i]);
    }
    printf("第%d项为：%d,总和为：%d",n,array[n],sum);
    return 1;

}




