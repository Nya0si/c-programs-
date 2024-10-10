//program to calculate electricity bill
/*
program to calculate electricity 
Author:Nyaosi
Date:
Reg No. CT101/G/24465/24
*/

#include<stdio.h>
#include<math.h>
int main(){
	float chargeperunit,totalbill;
	int unitsconsumed,customerID,totalamountpayable;
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
		totalamountpayable=totalbill+(totalbill*0.15);
		
	}if (totalbill<=100){
		totalamountpayable=100;}
		
	printf("chargeperunit is:%.2f\n",chargeperunit);
	printf("totalamountpayable:%d\n",totalamountpayable);
	
	return 0;
}
