#include<stdio.h>

#define FIFTY_NUMBER 20
#define HUNDRED_NUMBER 10

//  m是50，n是100
int qbt(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(m<n)
    {
        return 0;
    }
    return qbt(m-1,n)+qbt(m,n-1);
}

void main(void)
{
    int arrangement;
    arrangement = qbt(FIFTY_NUMBER,HUNDRED_NUMBER);
    printf("共有%d中排法",arrangement);
}








