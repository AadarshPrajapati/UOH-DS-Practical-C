#include<stdio.h>
int gcd(int num1,int num2){
    if(num2==0){
        return num1;
    }
    else{
        return gcd(num2,num1%num2);
    }
}
int main(){
    int num1,num2;
    printf("\nEnter the two numbers ");
    scanf("%d %d",&num1,&num2);
    printf("\nGCD is %d ",gcd(num1,num2));
    return 0;
}