#include<stdio.h>

#define size 5;
int front=-1,rear=-1;
int circularqueue[5];

void enqueue(){
    
    printf("\nEnter the element ");
    int x;
    scanf("%d",&x);

    int temp=(rear+1)%size;
    if(front==temp){
        printf("\nQueue is full \n ");
    }
    
    else if(front==-1 && rear ==-1){
        front=0,rear=0;
        circularqueue[rear]=x;
    }

    else{
        rear=temp;
        circularqueue[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("\nQueue is empty \n");
    }
    else if(front==rear){
        printf("\nElement deleted is %d \n",circularqueue[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("\nElement deleted is %d \n",circularqueue[front]);
        front=(front+1)%size;
    }

}

void display(){
    if(front==-1 && rear==-1){
        printf("\nQueue is empty \n");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d ",circularqueue[i]);
            i=(i+1)%size;
        }
        printf("%d\n",circularqueue[rear]);
    }
}

int main(){
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
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
      }
} 
    return 0;
}