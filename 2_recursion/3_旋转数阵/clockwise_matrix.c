#include<stdio.h>
int array[20][20];
int row,column;
void draw_rotate(int start_position,int side_length_x,int side_length_y,int start_number)
{
    int i;
    if(side_length_x==-1 || side_length_y==-1)
    {
        return;
    }
    else if(side_length_x==0 && side_length_y==0)
    {
        array[start_position][start_position]=start_number;
        return;
    }

    for(i=0;i<side_length_x;i++)
    {
        array[start_position][start_position+i]=start_number;
        start_number++;
    }
    for(i=0;i<side_length_y;i++)
    {
        array[start_position+i][start_position+side_length_x]=start_number;
        start_number++;
    }
    for(i=0;i<side_length_x;i++)
    {
        array[start_position+side_length_y][start_position+side_length_x-i]=start_number;
        start_number++;
        if(start_number>row*column)
        {
            return;
        }
    }
    for(i=0;i<side_length_y;i++)
    {
        array[start_position+side_length_y-i][start_position]=start_number;
        start_number++;
        if(start_number>row*column)
        {
            return;
        }
    }
    draw_rotate(start_position+1,side_length_x-2,side_length_y-2,start_number);
    return;
}

void main(void)
{
    int start_number=1;
    int start_position=0;
    int side_length=4;
    int p;
    
    printf("«Î ‰»Îx,y:  ");scanf("%d %d",&row,&column);

    draw_rotate(start_position,column-1,row-1,start_number);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
 
            printf("%3d",array[i][j]);

        }
        printf("\n");
    }
}
















