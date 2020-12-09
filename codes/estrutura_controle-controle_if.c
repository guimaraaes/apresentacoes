/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int i = 1;
int j = 3;

int main(){
    printf("Entre com um valor inteiro para i:");
    scanf("%i", &i);

    printf("Entre com um valor inteiro para j:");
    scanf("%i", &j);

    if (i== j){
        printf("São iguais");
    } else {
        if (i>j){
            printf("i maior que j");
        } else {
            printf("j maior que i");
        }
    }

    return 0;
}