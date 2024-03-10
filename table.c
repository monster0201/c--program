#include<stdio.h>
int main(){
    int n;
    printf("enter num =");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {     /*if (i==3){
           break;
            continue;
    } */  
    
    
    
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}