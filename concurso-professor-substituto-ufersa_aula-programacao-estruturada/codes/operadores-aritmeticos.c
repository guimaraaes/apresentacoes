/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int i = 1;
int j = 3;

int main()
{
    printf("primeiro E: %i \n", (i == 1) && (j == 3));
    printf("segundo E: %i \n", (i == 2) && (j == 3));
    printf("terceiro E: %i \n", (i == 2) && (j == 4));
    printf("primeiro OU: %i \n", (i == 1) || (j == 3));
    printf("segundo OU: %i \n", (i == 2) || (j == 3));
    printf("terceiro OU: %i \n", (i == 2) || (j == 4));
    printf("NEGAÇÃO : %i \n", !(i == 2));

    return 0;
}
