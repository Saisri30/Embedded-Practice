#include<stdio.h>

int main(void)
{
    int num = 0;
    int bit = 0;
    int count = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    
    while(num)
    {
        bit = num & 1;
        if(bit==1)
        {
            count++;
        }
        num = num >>1;
    }
    printf("Count of set bits is: %d", count);
    return 0;
}