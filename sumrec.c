#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is %d",sum(5));
    return 0;
}
//recursion declaration
int sum(int n){
    if (n==1)
    {
     return 1;
    }
    int sumN=sum(n-1);//sum of 1 to n
    int sumn=sumN+n;
    return sumn;
}
