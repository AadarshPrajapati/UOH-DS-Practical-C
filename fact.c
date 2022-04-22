#include<stdio.h>

int fact(int num){
    if(num==1 || num==0){
        return 1;
    }    
    else{
        return num*fact(num-1);
    }
}

int main(){
    int num;
    printf("\nEnter the number ");
    scanf("%d",&num);
    int result=fact(num);
    printf("\nFactorial is %d",result);
    return 0;
}