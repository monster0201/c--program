#include<stdio.h>

int sum(int a,int b);

int main(){
    int a,b;
    printf("enter 1st num :");
    scanf("%d",&a);
    printf("enter 2nd num :");
    scanf("%d",&b);

    int s= sum(a,b);
    printf("sum is %d\n",s);

    return 0;
}
int sum(int x,int y){
    return x+y;
}