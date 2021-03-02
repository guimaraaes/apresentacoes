/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
 
int i = 0;
 
int main(){
    for(i; i < 10; i++){
        if(i%2 == 0){
            printf("o valor %i é par \n", i);
        }
    }
    return 0;
}
