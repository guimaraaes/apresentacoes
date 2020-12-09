/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#define constante 100.2
#include <stdio.h>
#include <stdbool.h>

bool booleanno = true;
int inteiro = 3;
char caractere = 'a';
float real6bits = 22.2;
double real8bits = 1.222;

int main(){
    printf("constante: %f \n", constante);
    printf("booleanno: %i \n", booleanno);
    printf("inteiro: %i \n", inteiro);
    printf("caractere: %c \n", caractere);
    printf("real6bits: %f \n", real6bits);
    printf("real8bits: %.1f \n", real8bits);
    return 0;
}
