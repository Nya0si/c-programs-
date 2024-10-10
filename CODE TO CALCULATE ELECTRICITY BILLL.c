//program to calculate electricity bill
/*
program to calculate electricity bill 
Author:Nya0si
Date:8/10/2024
Reg No. CT101/G/24465/24
*/
#include<stdio.h>
#include<math.h>
int main(){
	float chargeperunit,totalbill;
	int unitsconsumed,customerID,totalamount;
	char customerName;
	
	printf("enter the customerID:");
	scanf("%d",&customerID);
	
	printf("enter the customerName:");
	scanf("%s",&customerName);
	
	printf("enter the units consumed:");
	scanf("%d",&unitsconsumed);
	
	//determination of charge per unit
	if(unitsconsumed<=199){
		chargeperunit=1.20;}
	else if (unitsconsumed<=400){
		chargeperunit=1.50;}
	else if (unitsconsumed<600){
		chargeperunit=1.80;}
	else if (unitsconsumed>=600){
		chargeperunit=2.00;}
	
	//calculation of total bill
	totalbill=unitsconsumed*chargeperunit;
	if (totalbill>400){
		totalamount=totalbill+(totalbill*0.15);
	
	}if (totalbill<=100){
		totalamount=100;}	
	printf("chargeperunit is:%.2f\n",chargeperunit);
	printf("totalamount:%d\n",totalamount);
	return 0;
}
