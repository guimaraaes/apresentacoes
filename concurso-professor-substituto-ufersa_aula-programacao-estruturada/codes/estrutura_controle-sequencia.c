/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int i = 1;
// int j = 3;

int main(){
    printf("i: %i \n", i);
    i = i + 10;
    printf("i: %i \n", i);
    i = i + 10;
    printf("i: %i \n", i);
    i = i + 10;
    // 31/7 = 7*4 + 3
    printf("resto da divisão: %i \n", i%7);
    
    return 0;
}
