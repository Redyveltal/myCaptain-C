#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of rows you want: ");
	scanf("%d", &n);
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
