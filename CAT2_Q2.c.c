// structure of employee
/*
program for a structure called employee
Author:Nya0si
Date:07/11/2024
Reg no:CT101/G/24465/24
*/
#include <stdio.h>
#include <string.h>
struct employee{
 char name[25];
 float salary;
 char department[20];
 char email[50];
 int ID;	
}employee;

int main(){
	    // Declare and initialize the structure variable struct book;
    struct employee;
	strcpy(employee.name,"John Doe"); 
	strcpy(employee.department,"Human Resources");
	employee.ID=12345;
	strcpy(employee.email,"john.doe@company.com");
	employee.salary=55000.50;
	
	//print the values
	printf("Name:%s\n", employee.name);
    printf("Salary:%.2f\n", employee.salary);
    printf("Email:%s\n",employee.email);
    printf("Department:%s\n",employee.department);
    printf("ID:%d\n",employee.ID);
	
	return 0;
}