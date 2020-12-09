/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
 
int j = 13;
 
int main(){
    while(j%7 != 0){
        
        //j = j - 1
        j--;
    }
    printf("valor de j ao sair do laço: %i", j);
}
