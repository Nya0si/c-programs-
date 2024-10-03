//program to calculate the fine for overdue library books
/*
program to calculate the fine for overdue library books
Author:Nyaosi
Reg no.CT101/24465/24
Date:29/09/2024
*/
//preprocessor directive
#include<stdio.h>
int main (){
	//variables the user is prompted to enter
	int bookID,duedate,returndate,daysOverdue;
	double finerate=0, fineamount=0;
	
	printf("enter bookID:\n");
	scanf("%d", &bookID);
	
	printf("enter duedate(in days):\n");
	scanf("%d", &duedate);
	
	printf("enter return date (in days):\n");
	scanf("%d", &returndate);
	
	//calculation of overdue days
	daysOverdue=returndate-duedate;
	
	//fine rate determination
    if(daysOverdue>0 &&daysOverdue<7){
        finerate = 20;}
	else if(daysOverdue >= 8 &&daysOverdue <= 14){
		finerate=50;
		}else if(daysOverdue>=15){
			finerate=100;
		}else{
			finerate=0;
		}
		
	//calculate fine amount
	fineamount=finerate*daysOverdue;
	
	//output display
	printf("bookID:%d\n",bookID);
	printf("returndate:%d\n",returndate);
	printf("duedate:%d\n",duedate);
	printf("daysOverdue:%d\n",daysOverdue);
	printf("finerate:sh%.2f per day\n",finerate);
	printf("fineamount:sh%.2f\n",fineamount);
	
	return 0;
							
	}
