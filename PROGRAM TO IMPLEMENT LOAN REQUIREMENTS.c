//program to implement loan requirements
/*
program to implement loan requirements
Author:Nyaosi
Reg no.CT101/24465/24
Date:29/09/2024
*/
//preprocessor directive
#include<stdio.h>

int main(){
	//user prompt
	int age;
	double annualincome;
	
	printf("enter your age:\n");
	scanf("%d",&age);
	
	printf("enter your annual income in Ksh.:\n");
	scanf("%lf",&annualincome);
	
	if (age>=21&annualincome>=21000){
		printf("Congratulations you qualify for a loan\n");}
		
		else{
			printf("Unfortunately, we are unable to offer you a loan at this time.\n");}
			
	
	return 0;
	
}