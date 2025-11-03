#include<stdio.h>
#include<stdint.h>
// Set nth bit of the byte
uint8_t setBits(uint8_t byte, uint8_t n)
{
    if(n<8)
    {
        byte = (byte | (1u<<n));
        return byte;
    }
}
//Clear nth bit of the byte
uint8_t clearBits(uint8_t byte, uint8_t n)
{
    if(n<8)
    {
        byte &= ~(1u<<n);
        return byte;
    }
}
//Toggle nth bit of the byte
uint8_t toggleBits(uint8_t byte, uint8_t n)
{
    if(n<8)
    {
        byte ^= (1u<<n);
        return byte;
    }
}
void main(void)
{
    uint8_t Reg = 0x0B ; 
    uint8_t Reg1 = setBits(Reg, 2); //sets bit 2
    uint8_t Reg2 = clearBits(Reg,3); //clears bit 3
    uint8_t Reg3 = toggleBits(Reg,1); //Toggle bit 1
    printf("Reg1 = 0x%02X ,Reg2 = 0x%02X ,Reg3 = 0x%02X" , Reg1,Reg2, Reg3);

}