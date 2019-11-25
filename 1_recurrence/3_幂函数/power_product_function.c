#include<stdio.h>
#include<math.h>

#define True  1
#define False 0

int find_number(double n,double *array);
double sort(int m,double *array,int number);



int find_number(double n,double *array)
{
    int row=1;
    int i;
    int per_row_start_number[1000];
    int number=0;
    char flag;
    array[0]=1;
    printf("array[0]%f\n",array[0]);
    number++;
    per_row_start_number[0]=0;
    
    while(1)
    {
        flag=False;
        for(i=0;i<row;i++)
        {
            if(array[per_row_start_number[row-1]+i]>0 && 2*array[per_row_start_number[row-1]+i]<=n)
            {

                if(i==0)
                {
                    per_row_start_number[row]=number;
                    flag=True;
                }
                array[number]=2*array[per_row_start_number[row-1]+i];
                number++;
            }
            else
            {
                break;
            }
            
        }
        if(pow(3,row)<=n)
        {
            array[number]=pow(3,row);
            number++;
        }
        if(flag==False)
        {
            break;
        }

        row++;
    }
    return number;
}

double sort(int m,double *array,int number)
{
    int i,j;
    double temp;
    for(i=0;i<number;i++)
    {
        for(j=i+1;j<number;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return array[m-1];
}





void main(void)
{
    double n;
    int m;
    double array[10000];
    int number;
    double m_item_number;
    printf("计算小于n的项数，请指定n:");scanf("%lf",&n);
    printf("输出序列的第m项，请指定m:");scanf("%d",&m);
    number = find_number(n,array);
    m_item_number = sort(m,array,number);
    printf("共有%d个数，小于%.0f\n",number,n);
    printf("第%d项是%.0f\n",m,m_item_number);
}
