#include<stdio.h>
#include <stdint.h>

void main()
{
    uint8_t num = 0;
    uint8_t  result = 0;
    printf("Enter decimal number to reverse: ");
    scanf("%hhu", &num);
    int i =0;
    for(i=0;i<8;i++)
    {
        unsigned char bit = num & 1;
        num = num >> 1; // right shift
        result = (result << 1) | bit;
    }
    printf("Reversed number is : %hhu\n ", result);

}