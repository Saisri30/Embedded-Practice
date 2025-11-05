#include<stdio.h>
#include<string.h>
#include<math.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648


// Function to convert string to integer
int my_atoi(char *str)
{
    char index= 0;
    char sign = 1;
    int num = 0;
    char len = strlen( str );
    
    while( index < len)
    {
        if(str[index] == ' ')
        {
            index++;
        }
        if(str[index]=='-')
        {
            sign = -1;
            index++;
        }
        while(str[index] >= '0' && str[index] <= '9')
        {
            int digit = str[index]-'0';
            num = (num * 10) + digit ;
            index++;
        }
        
    }
    num = num * sign;
    if(num > INT_MAX)
    {
        return INT_MAX;
    }
    else if (num < INT_MIN)
    {
        return INT_MIN;
    }
    else
    {
        return num;
    } 
}

void main(void)
{
    char string[]={0};
    printf("Enter ASCII to convert into integer: ");
    scanf("%s",string);
    int num = my_atoi(string);
    printf("%d \n" , num);
}