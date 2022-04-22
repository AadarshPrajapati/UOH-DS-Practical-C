#include<stdio.h>
#include<string.h>

char stack[25];
char ch;
int top=-1;

void push(char ele){
    if(top==24){
        printf("\nStack is full \n");
    }

    else{
        top++;
        stack[top]=ele;
        // printf("\nstack[%d]=%c",top,ele);
    }
}

char pop(){
    ch=stack[top];
    top--;
    return ch;
}

void display(){
    for (int i = 0; i <= top; i++)
    {
        printf("%c",stack[i]);
    }
}

int isoperand(char ele){
    if((ele>='A' && ele<='Z')|| (ele>='a' && ele<='z')){
        return 1;
    }

    else{
        // printf("sffasfasd");
        return 0;
    }
}

int main(){
    int i=0;
    char postfix[25];
    printf("\nEnter the postfix expression ");
    scanf("%s",postfix);
    // printf("%d",strlen(postfix));
    
    while(i<strlen(postfix)){
            char ele=postfix[i];
            if(isoperand(ele)){
                push(ele);
                push(' ');  
            }
            else{
                for (int j = top-1; j>=0; j--)
                {
                    if(stack[j]==' '){
                        // printf("%d%c%c",j,stack[j],ele);
                        stack[j]=ele;
                        break;
                    }
                    else{

                    }
                }
                
        }
        i++;
    }

    display();
    return 0;
}