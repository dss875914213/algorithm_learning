#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int array[100]={0,15,2,4,5,3,55,23,53,32,14};
int k=3;

int  quick_sort(int start, int end)
{
    int i=start,j=end;

    array[0]=array[start];

    printf("start %d  end %d  %d\n",start,end,array[0]);
    if(end<start)
    {
        return start;
    }
    while(i<j)
    {
        
        while(1)//比他小的放左边
        {
            printf("i:%d j:%d\n",i,j);
            if(i>=j)
            {
                break;
            }
            if(array[0]>array[j])
            {
                array[i]=array[j];
                i+=1;
                break;
            }
            else
            {
                j--;
            }
        }
        while(1)
        {
            printf("i:%d j:%d\n",i,j);
            if(i>=j)
            {
                break;
            }
            if(array[0]<array[i])
            {
                array[j]=array[i];
                j-=1;
                break;
            }
            else
            {
                i++;
            }
        }
    }
    array[i]=array[0];//比较值放在中间
    
    if(k==i)
    {
        return array[i];
    }
    else if(k<i)
    {
        return quick_sort(start,i-1);
    }
    else if(k>i)
    {
        return quick_sort(i+1,end);
    }
}

void main(void)
{
    int t;
    t=time(0)%100;srand(t);
    for(int i=1;i<=20;i++)
    {
        array[i]=rand()%(4*20)+10;
    }
    printf("dss\n");
    printf("k=%d\n",quick_sort(1,20));
    for(int i=1;i<=20;i++)
    {
        printf("%d\n",array[i]);
    }
}










