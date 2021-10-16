#include<stdio.h>
main()
{
	printf("Enter your marks: ");
	int a = 0;
	scanf("%d", &a);
	printf("Your entered mark is : %d \n", a);
	if(a>85)
	{
		printf("You have obtained Grade A");
	}
	else if(a>70)
	{
		printf("You have obtained Grade B");
	}
	else if(a>55)
	{
     	        printf("You have obtained Grade C");
	}
	else if(a>40)
	{
     	        printf("You have obtained Grade D");
	}
	else
	{
		printf("You have obtained Grade F");
	}
}
