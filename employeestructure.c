#include<stdio.h>

struct employee {
	int emp_no;
	char emp_name[50];
	char dept_name[20];
	int salary;
};


int main()
{
	int i;
	int n=20;
	
	struct employee emps[n];
	
	//Taking inputs
	printf("Enter the details of employees : \n \n", n);
	
	for(i=0;i<n;i++) {
		printf("Employee (%d):- \n", i+1);
		
		printf("Emp No: ");
		scanf("%d", &emps[i].emp_no);
		
		printf("Emp Name: ");
		scanf("%s", emps[i].emp_name);
		
		printf("Department Name: ");
		scanf("%s", emps[i].dept_name );
		
		printf("Salary: ");
		scanf("%d", &emps[i].salary);
		
		printf("\n");
	}
	
	//Displaying entered details
	printf("================ Employee Details ==================\n");
	printf("Emp No.\t\tEmp Name\t\tDepartment Name\t\tSalary\n");
	for (i=0;i<n;i++) {
		printf("%d\t\t%s\t\t%s\t\t%d\n", emps[i].emp_no, emps[i].emp_name, emps[i].dept_name, emps[i].salary);
	}
	return 0;
}
