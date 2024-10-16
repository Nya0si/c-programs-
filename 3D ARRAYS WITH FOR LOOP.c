//3D Array program with for loop 
/*
3D array program
Author:Nya0si
Date:11/10/2024
Reg no:CT101/24465/24
*/
#include <stdio.h>
int main(){
    int i,j,k;
    int marks[2][2][3]={
        {{40,50,60},{0,0,0}},
        {{70,80,2},{0,0,0}}};
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){ 
            for (k=0;k<3;k++){
    printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
            }
        }
    }

    return 0;
}
