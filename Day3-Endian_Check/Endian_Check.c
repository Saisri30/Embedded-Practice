#include<stdio.h>
#define MASK 0xFF
int main(void)
{
    unsigned int num=2345;  // Value to check
    unsigned char *ptr = (unsigned char*) &num ;   

    num = num & MASK;
    if(*ptr == num)     // Checks the lowest memory
    {
        printf("Little Endian \n");
    }
    else
    {
        printf("Big Endian \n");
    }
    printf("First byte in memory is : %u\n", *ptr);

    return 0;
}