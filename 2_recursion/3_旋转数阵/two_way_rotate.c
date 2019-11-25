#include<stdio.h>
int array[20][20];

void draw_rotate(int start_position,int side_length,int start_number)
{
    int i;
    if(side_length==-1)
    {
        return;
    }
    else if(side_length==0)
    {
        array[start_position][start_position]=start_number;
        return;
    }

    for(i=0;i<side_length;i++)
    {
        array[start_position][start_position+i]=start_number;
        start_number++;
    }
    for(i=0;i<side_length;i++)
    {
        array[start_position+i][start_position+side_length]=start_number;
        start_number++;
    }
    for(i=0;i<side_length;i++)
    {
        array[start_position+side_length][start_position+side_length-i]=start_number;
        start_number++;
    }
    for(i=0;i<side_length;i++)
    {
        array[start_position+side_length-i][start_position]=start_number;
        start_number++;
    }
    draw_rotate(start_position+1,side_length-2,start_number);
    return;
}

void main(void)
{
    int start_number=1;
    int start_position=0;
    int side_length=4;
    int p;
    int n;
    printf("请输入n:  ");scanf("%d",&n);
    side_length = n-1;

    printf("请输入p 1代表顺时针，2代表逆时针  ");scanf("%d",&p);
    draw_rotate(start_position,side_length,start_number);
    for(int i=0;i<side_length+1;i++)
    {
        for(int j=0;j<side_length+1;j++)
        {
            if(p==1)
            {
                printf("%3d",n*n+1-array[i][j]);
            }
            else if(p==2)
            {
                printf("%3d",n*n+1-array[j][i]);
            }
            
        }
        printf("\n");
    }
}
















