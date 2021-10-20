#include<stdio.h>
main()
{
	int i,j,n;
	//Get input of rows from user
	printf("Enter the number of rows you want: ");
	scanf("%d", &n);
	
	//For loop 
	for(i=0; i<n; ++i)
	{
		for(j=0; j<=i; ++j)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
