#include<stdio.h>
main()
{
	//Choosing option
	printf("Please enter any number from 1 to 6 : \n");
	
	//Reading the choice entered
	int food=0;
	scanf("%d", &food);
	
	//Displaying information
	switch(food)
	{
		case 1:
			printf("Food Item - Sandwich \nPrice - Rs. 149");
			break;
		case 2:
			printf("Food Item - Burger \nPrice - Rs. 189");
			break;
		case 3:
			printf("Food Item - Pizza \nPrice - Rs. 296");
			break;
		case 4:
			printf("Food Item - French Fries \nPrice - Rs. 89");
			break;
		case 5:
			printf("Food Item - Shawarma \nPrice - Rs. 199");
			break;
		case 6:
			printf("Food Item - Pasta \nPrice - Rs. 145");
			break;
		default:
			printf("Invalid Choice. Please Try Again");
	}
}
