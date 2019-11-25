#include<stdio.h>

#define True  1
#define False 0

#define SAILOR_NUMBER 7
#define GIVE_MONOKEY_NUMBER 3

void find_number(int *number);
char judge_number(int *number);

void find_number(int *number)
{
    *number=*number+SAILOR_NUMBER-1;
}

char judge_number(int *number)
{
    int i;
    int temp=*number;
    for(i=0;i<SAILOR_NUMBER;i++)
    {
        if(temp%(SAILOR_NUMBER-1)==0)
        {
            temp=temp*SAILOR_NUMBER/(SAILOR_NUMBER-1)+GIVE_MONOKEY_NUMBER;
        }
        else
        {
            return False;
        }
        
    }
    *number=temp;
    return True;
}

void main(void)
{
    int number=SAILOR_NUMBER-GIVE_MONOKEY_NUMBER-1;
    int coconut_number;
    while(1)
    {
        find_number(&number);
        coconut_number = SAILOR_NUMBER*number+GIVE_MONOKEY_NUMBER;
        if(judge_number(&coconut_number))
        {
            break;
        }
    }
    printf("共有%d个椰子",coconut_number);
}














