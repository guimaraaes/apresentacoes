/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
 
int i = 0;
int v[5];
int main(){
    for (i; i< 15; i++){
        v[i] = i;
    }
    for (i=0; i< 5; i++){
        printf("vetor: %i \n", v[i]);
    }
}
