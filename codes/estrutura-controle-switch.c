/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
 
int i ;
 
int main(){
    printf("Entre com um valor do menu \n");
    printf("1 - Escolha número um \n");
    printf("2 - Escolha número dois \n");
    printf("3 - Escolha número três \n");
    scanf("%i", &i);
     
    switch (i){
        case 1:
            printf("você escolheu 1");
        break;
        
        case 2:
            printf("você escolheu 2");
        break;
        
        case 3:
            printf("você escolheu 3");
        break;
    
        default:
            printf("você fez uma escolha inválida");
    }

    return 0;
}
