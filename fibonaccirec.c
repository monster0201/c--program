#include<stdio.h>

int fib(int n);

int main(){
    printf("%d",fib(6));
    return 0;
}

int fib(int n){
    if(n==0){
    return 0;}

    if(n==1){
        return 1;
    }
    

int fibnum1= fib(n-1);
int fibnum2= fib(n-2);
int fib= fibnum1+fibnum2;
return fib;
}