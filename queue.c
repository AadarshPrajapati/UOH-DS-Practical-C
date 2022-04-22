#include <stdio.h>
 
#define max 5
 
void insert();
void delete();
void display();
int queue[max];
int rear = - 1;
int front = - 1;
main()
{
    int ch;
    while (1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display all elements\n");
        printf("4.Quit \n");
        printf("Enter your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong ch \n");
        } 
    }
} 
 
void insert()
{
    int value;
    if (rear == max - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &value);
        rear = rear + 1;
        queue[rear] = value;
    }
}
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else if(front<max && front >-1)
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}