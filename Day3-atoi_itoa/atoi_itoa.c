#include<stdio.h>
#include<string.h>

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

void my_itoa(int num, char *str)
{
    int index = 0;
    int isNeg = 0;
   
    if(num ==0)
    {
        str[index++] = '0';
        str[index] = '\0';
    }
    if(num <0)
    {
        num = -num;
        isNeg = 1;
    }
    //Storing digits in the array
    while(num != 0)
    {
        int rem =0;
        rem = num % 10;
        str[index++] = rem + '0';
        num = num / 10;
    }
    if(isNeg)
    {
        str[index++] = '-';
    }
    str[index] = '\0';

    // Reverse the string
    int start = 0;
    int end = index - 1;
    while (start < end)
    {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void main(void)
{
    //For atoi function
    char string[]={0};
    printf("Enter ASCII to convert into integer: ");
    scanf("%s",string);
    int num = my_atoi(string);
    printf("%d \n" , num);

    //For itoa function
    char buffer[]={0};
    int integer = 0;
    printf("Enter integer to convert into ASCII: ");
    scanf("%d", &integer);
    my_itoa(integer , buffer);
    printf("%s" , buffer);
}