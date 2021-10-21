/*  
 * C Program to find Sum of Digits of a Number using Recursion
 */
#include <stdio.h>
 
int prime(int, int);

int main()
{
	int num, flag = 0;
	printf("Enter the number to check : \n");
	scanf("%d", &num);
	flag = prime(num, num/2);
	if(flag == 1)
	{
		printf("%d is prime\n", num);
	}
	else
	{
		printf("%d is not prime", num);
	}
	return 0;
}

int prime(int num, int i)
{
	if (i ==1)
	{
		return 1;
	}
	else
	{
		if (num%i==0)
		{
			return 0;
		}
		else
		{
			return prime(num, i-1);
		}
	}
}
