#include<stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);

    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
        printf("Factorial is=%d\n",fact);
    }
    return 0;

}