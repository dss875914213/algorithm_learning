#include<stdio.h>

int search_max_item(int *a,int *b,int max_num,int n);
int search_max(int n,int *array);

//���뼸��Լ�����ڶ����е�����
//�������ֵ
int search_max(int n,int *array)
{
    int i;
    int max_num=0;
    array[1]=1;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            array[i]=array[i/2]+1;
        }
        else
        {
            array[i]=array[(i-1)/2]+array[(i+1)/2];
        }
        if(array[i]>max_num)
        {
            max_num=array[i];
        }      
    }
    printf("��%d����%d�����ֵ��%d\n",n,array[n],max_num);
    return max_num;
    
}

int search_max_item(int *a,int *b,int max_num,int n)
{
    int i;
    int j=0;
    for(i=2;i<n;i++)
    {
        if(a[i]==max_num)
        {
            b[j]=i;
            j++;
        }
    }
    return j;
}

void main(void)
{
    int n;//��n��
    int max_num;//���ֵ
    int i;//����
    int array[10000];//����������У��±��1��ʼ
    int max_item_lication[100];//�������ֵλ��
    int max_item_number;//�м������ֵ

    printf("����n:(2<n<10000):  ");scanf("%d",&n);

    
    max_num=search_max(n,array);
    max_item_number = search_max_item(array,max_item_lication,max_num,n);
    printf("���ֵ��Ӧ����Ϊ:");
    for(i=0;i<max_item_number;i++)
    {
        printf("%d  ",max_item_lication[i]);
    }
    printf("\n");

}


