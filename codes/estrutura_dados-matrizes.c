/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
 
 
int m[3][3], i, j;
int main(){
    for (i=0; i< 3; i++){
        for (j=0; j< 3; j++){
            if (i == j){
                m[i][j] = 1;
            } else {
                m[i][j] = 0;
            }
         }
    }
    
    for (i=0; i< 3; i++){
        for (j=0; j< 3; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
