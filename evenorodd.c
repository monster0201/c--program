// Check whether an integer is odd or even

#include <stdio.h>
int main() {
   /* int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
*/
for(int i=1;i<=100;i++){

    if  (i%2 == 0) {
        printf("%d even\n ",i);
    }
    else {
        printf("%d odd\t ",i);
    }
}
    return 0;
}