#include<stdio.h>
#include<math.h>
#define True  1
#define False 0

char check_number(int number);
void search_number(int m);

void search_number(int m)
{
	int prime[10][20000];
	int prime_number[10];
	int test_number;
	int i=0,j=0,k=0;
	prime[0][0]=2;
	prime[0][1]=3;
	prime[0][2]=5;
	prime[0][3]=7;
	prime_number[0]=4;
	while(i<m)
	{
		i++;
		prime_number[i]=0;
		for(j=0;j<prime_number[i-1];j++)
		{
			for(k=1;k<=9;k++)
			{
				test_number=pow(10,i)*k+prime[i-1][j];
				if(check_number(test_number))
				{
					prime[i][prime_number[i]]=test_number;
					prime_number[i]+=1;
				}
			}
		}
		printf("%d位数，有%d个素数\n",i+1,prime_number[i]);
		for(j=0;j<prime_number[i];j++)
		{
			printf("%3d : %3d\n",j,prime[i][j]);
		}
		printf("\n");
	}
	
} 

char check_number(int number)
{
	int i;
	if(number%2==1)
	{
		for(i=3;i<=sqrt(number);i+=2)
		{
			if(number%i==0)
			{
				return False;
			}		
		}
		return True;
	}
	return False;
}

void main(void)
{
	int m;
	int i;
	printf("输入m(m>1)");scanf("%d",&m);
	search_number(m-1);
}





