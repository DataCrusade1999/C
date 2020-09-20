#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	struct class
	{
		int empno;
		char name[3][20];
		float salary;
	};
	struct class e[3];

	printf("Enter Employee Number" );
	for (i = 0; i <= 2; i++)
	{
		scanf_s("%d",&e[i].empno);
	}
	printf("Enter The Salary");
	for (i = 0; i <= 2; i++)
	{
		scanf_s("%f", &e[i].salary);
	}
	printf("Enter Employee Name");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			scanf_s("%s ", &e[i].name[j]);

		}
		
	}
	for (i = 0; i <=2 ; i++)
	{
		printf("Employee no:%d\n ",e[i].empno);
	}
	for (i = 0; i <= 2; i++)
	{
		printf("Employee Salary:%f\n", e[i].salary);
	}
	for (i = 0; i <= 2; i++)
	{
		printf("Employee Name:%s\n", e[i].name[i]);
	}
	
}
