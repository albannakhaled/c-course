#include<stdio.h>
void main()
{
    int var_1,var_2,var_3 ; // declare multiple variable in the same ligne
    var_1 = var_2 = var_3 = 6 ; // assign multi variable in one ligne
    int var = 10 ; // initialize
    int var1 ; // declare
    var1 = var ;
    printf("var1 = %d\n",var1);
    printf("var_1 = %d\n",var_1);
    printf("var_2 = %d\n",var_2);
    printf("var_3 = %d\n",var_3);
}