#include<stdio.h>

int p(int n,int m)
{
    if(n==0||m==0)
    {
        return 1;
    }
    else if(n==1||m==1)
    {
        return n+m;
    }
    return p(n-1,m)+p(n,m-1);
}

int main()
{
    int n,m;
    int i,j;
    int arrangement;
    printf("������n,m");scanf("%d %d",&n,&m);
    arrangement=p(n,m);
    printf("�ܹ���%d������\n",arrangement);
}




