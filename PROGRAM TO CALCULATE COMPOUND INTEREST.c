//program to calculate compound interest
/*
Program to calculate compound interest
Author: Nyaosi
Reg no. CT101/24465/24
Date: 30/09/2024
*/
//preprocessor directive
#include<stdio.h>
#include<math.h>
int main (){
	
	double principal, rate , compoundinterest ,amount,time, period,n;
	//input of principal, time and rate
	printf("enter the principal:\n");
	scanf("%lf", &principal);
	
	printf("enter the time (in years):\n");
	scanf("%lf",&time);
	
	printf("enter the rate of interest:\n");
	scanf("%lf",&rate);
	
	period=n*time;
	
	//amount of interest calculation
	amount=principal*pow((1+rate/n),period);
	
	//calculate compound interest
	printf("compoundinterest =%.2f\n",compoundinterest);
	printf("total amount=%.2f\n",amount);
	
	return 0;
}