#include<stdio.h>

int sum(int);

int main()
{
	int num, sol;
	printf("Enter the number : \n");
	scanf("%d",&num);
	sol = sum(num);
	printf("Sum of digits of the number is : %d", sol);
	return 0;
}

int sum(int num)
{
	if(num!=0)
	{
		return (num%10 + sum(num/10));
	}
	else
	{
		return 0;
	}
}
