#include<stdio.h>
#include<stdint.h>

typedef struct 
{
    uint8_t EN : 1; //bit0 for Enable
    uint8_t IRQ: 1; //bit1 for Interrupt enable
    uint8_t MODE: 2; //bit2,bit3 for Mode
    uint8_t OVRF: 1; //bit4 for Overflow flag
    uint8_t RSV: 3; //bit5, bit6, bit7 : Reserved
}ctrlRegt;

int main(void)
{
    ctrlRegt reg = {1,1,3,1,7};

    printf("size of the ctrlregt: %u\n", sizeof(ctrlRegt));
    printf("value: 0x%02X",reg);

    return 0;
}