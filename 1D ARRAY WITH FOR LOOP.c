//1D Array program with for loop 
/*
program for 1D Array with for loop
Author:Nya0si
Date:11/10/2024
Reg no:CT101/G/24465/24
*/
#include <stdio.h>
int main(){
    int i,j;
    int marks[2][3]={{40,50,60},{70,80,2}};

    for(i=0;i<2;i++){ //loop through rows
        for (j = 0;j<3;j++){ //loop through columns
            printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
        }
    }

    return 0;
}
