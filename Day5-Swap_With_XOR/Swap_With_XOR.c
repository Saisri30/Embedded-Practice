#include<stdio.h>

int main(void)
{
    int var1 = 0, var2 =0;
    printf("Enter 2 variables: ");
    scanf("%d %d", &var1, &var2);

    var1 = var1 ^ var2;
    var2 = var1 ^ var2;
    var1 = var1 ^ var2;

    printf("Variables after swapping: Var1 :%d , Var2 :%d", var1,var2);
    return 0;
    
}