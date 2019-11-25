#include<stdio.h>
#include<math.h>

void main(void)
{
    int n;
    int i;
    int x=1,y=1;
    double array[10000];
    double sum=0;
    printf("«Î ‰»În(0<n<10000)");scanf("%d",&n);
    array[0]=1;
    sum+=array[0];
    for(i=1;i<n;i++)
    {
        if(pow(2,x)<pow(3,y))
        {
            array[i]=pow(2,x);
            x++;
        }
        else
        {
            array[i]=pow(3,y);
            y++;
        } 
        sum+=array[i];
        printf("%d %.0f\n",i,array[i]);    
    }
    printf("sum %.0f\n",sum);
}