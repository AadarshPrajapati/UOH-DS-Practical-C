#include<stdio.h>

int fib(int num,int a,int b){
    if(num>2){
        int c=a+b;
        printf("%d ",c);
        fib(num-1,b,c);
    }
    else{
        return 0;
    }

}

int main(){
    int num;
    printf("\nEnter the number till you want fibb series ");
    scanf("%d",&num);
    printf(" 0 1 ");
    fib(num,0,1);
}