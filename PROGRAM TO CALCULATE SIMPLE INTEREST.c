//program to calculate simple
/*
program to calculate simple interest
Author:Nyaosi
Reg no.CT101/24465/24
Date:29/09/2024
*/
//preprocessor directive
#include<stdio.h>

int main(){
	//declaration and initialization
	float principal, rate, time, simpleinterest;
	
	printf("enter principal amount:\n");
	scanf("%f",&principal);
	
	printf("enter interest rate:\n");
	scanf("%f",&rate);
	
	printf("enter time (in years):\n");
	scanf("%f",&time);
	
	simpleinterest=(principal*rate*time)/100;
	printf("simpleinterest=%.2f\n",simpleinterest);
	
	return 0;
	
}