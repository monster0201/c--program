#include<stdio.h>

/*int main(){
    for (int i=0; i<=10; i++){
         printf("%d\n", i); 
    } 
    return 0;

}*/
int main(){
    int n;
    printf("enter num =");
    scanf("%d",&n);

    int sum=0;
    for (int i = 0; i <= n; i++){
        sum+=i;
    }
    printf("sum is %d\n",sum);
    
    return 0;

    

}