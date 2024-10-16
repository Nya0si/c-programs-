//program to calculate electric bill using functions
/*
electric bill calculator with functions
Author:Nya0si
Date:15/10/2024
Reg no.:CT101/G/24465/24
*/ 
#include <stdio.h>
#include <math.h>

//function to calculate charge per unit
float ChargePerUnit(int unitsConsumed) {
    if (unitsConsumed <=199) {
        return 1.20;
    } else if (unitsConsumed <= 400) {
        return 1.50;
    } else if (unitsConsumed < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

//function to calculate the total bill before applying any surcharges
float calculateTotalBill(int unitsConsumed, float chargePerUnit) {
    return unitsConsumed*chargePerUnit;
}
//function to apply surcharge
float surcharge(float totalBill) {
    if (totalBill >400) {
        return totalBill + (totalBill*0.15); //15% surcharge
    } else if (totalBill < 100) {
        return 100; //minimum bill amount is 100
    } else {
        return totalBill;
    }
}
//function to calculate the sum of two numbers
float sum(float x, float y) {
    return x + y;
}
int main() {
    float chargePerUnit, totalBill, totalAmount;
    int unitsConsumed, customerID;
    char customerName;
    
    printf("Enter the customer ID:");
    scanf("%d",&customerID);
    
    printf("Enter the customer Name:");
    scanf("%s",&customerName);
    
    printf("Enter the units consumed:");
    scanf("%d",&unitsConsumed);
    
    //calculate charge per unit
    chargePerUnit = ChargePerUnit(unitsConsumed);
    
    //calculate total bill
    totalBill = calculateTotalBill(unitsConsumed, chargePerUnit);
    
    //calculate surcharge if applicable
    totalAmount = surcharge(totalBill);
    
    //calculate sum of total bill and total amount
    float totalSum = sum(totalBill, totalAmount);
    
    //display results
    printf("Customer ID:%d\n", customerID);
    printf("Customer Name:%s\n", customerName);
    printf("Units Consumed:%d\n", unitsConsumed);
    printf("Charge per Unit:%.2f\n", chargePerUnit);
    printf("Total Bill (before surcharge):%.2f\n", totalBill);
    printf("Total Amount (after surcharge):%.2f\n", totalAmount);
    printf("Sum of Total Bill and Total Amount:%.2f\n", totalSum);
    
    return 0;
}