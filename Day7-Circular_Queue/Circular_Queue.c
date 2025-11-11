#include<stdio.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int r_ind = -1 , w_ind = -1;

int isFull()
{
    if((w_ind+1)%MAX_SIZE == r_ind )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(w_ind == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int data)
{
    if(isFull())
    {
        printf("Queue Overflow \n");
    }
    if(r_ind == -1)
    {
        r_ind = 0;
    }
    w_ind = (w_ind +1) % MAX_SIZE ;
    queue[w_ind] = data;
    printf("Element %d inserted \n", data);
}

int dequeue()
{
    if(isEmpty())
    {
        printf("Queue Underflow \n");
        return -1;
    }
    int data = queue[r_ind];

    if(r_ind == w_ind)
    {
        r_ind = -1;
        w_ind = -1;
    }
    else
    {
        r_ind = (r_ind+1) % MAX_SIZE ;
    }
    return data;
}

void display()
{
    if(isEmpty())
    {
        printf("Queue is Empty \n");
    }
    printf("Queue elements: ");
    int i = r_ind;
    while(i!= w_ind)
    {
        printf("%d " , queue[i]);
        i= (i+1) % MAX_SIZE ;
    }
    printf("%d \n", queue[w_ind]);
}

int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);

    display(); 

    printf("Dequeue elements: %d\n",dequeue());

    display();
    return 0;
}