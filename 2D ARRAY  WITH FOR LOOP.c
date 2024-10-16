//2D Array program
/*
program for 2D Array
Author:Nya0si
Date:11/10/2024
Reg no:CT101/G/24465/24
*/
#include <stdio.h>
int main(){
	int i,j;
	int marks[2][3]={{40,50,60},{70,80,2}};
	for (i=0;i<2;i++){
		for (j=0;j<3;j++)
		printf("marks[%d][%d]=%d\n",i,j,marks[i]);
	}
	return 0;
}