#include<stdio.h>
int main()
{
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>=18)
    printf("eligible for voting\n");
    else
    printf("not eligible for voting\n");
    return 0;
    
}