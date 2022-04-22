#include<stdio.h>
#include<stdlib.h>

int top=-1,size,stack[100];

void insert(){
    if(top==size-1){
        printf("\nStack is full ");
    }
    else{
        printf("\nEnter the element want to insert ");
        int value;
        scanf("%d",&value);
        stack[++top]=value;
        printf("\nValue inserted %d\n",value);
    }
}

void delete(){
    if(top==-1){
        printf("\nStack is empty ");

    }
    else{
        int temp=stack[top];
        top-=1;
        printf("\nValue deleted %d \n",temp);
    }
}

void overflow(){
    if(top>=size){
        printf("\nOverflow ");
        return;
    }
    else{
        printf("\nNot Overflow ");
    }
}

void underflow(){
    if(top<size){
        printf("\nUnderflow ");
    }
    else{
        printf("\nNot Underflow");
        return;
    }
}

void seek(){
    printf("seek value is %d \n",stack[top]);
}

void print(){
    for (int i = 0; i <=top; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
    
}
int main(){
    printf("\nEnter the size of stack ");
    scanf("%d",&size);
    int ch;
    while (1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.Display all elements\n");
        printf("4.Is overflow \n");
        printf("5. Is underflow \n");
        printf("6.seek\n");
        printf("7.Quit \n");
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
            print();
            break;
            case 4:
            overflow();
            break;
            case 5:underflow();
            break;
            case 6:seek();
            break;
            case 7:exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
    return 0;
}