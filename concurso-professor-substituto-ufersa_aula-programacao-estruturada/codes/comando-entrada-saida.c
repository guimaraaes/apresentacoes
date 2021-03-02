/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
 
int i = 1;
float f = 1;
char c = 's';
 
int main(){
    printf("Entre com um valor inteiro para i:");
    scanf("%i", &i);
    printf("%i \n", i);
    printf("Entre com um valor real para f:");
    scanf("%f", &f);
    printf("%f \n", f);
    printf("Entre com um valor caractere para c:");
    scanf(" %c", &c);
    printf("%c \n", c);
    return 0;
}
