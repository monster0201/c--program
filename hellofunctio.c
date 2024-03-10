#include<stdio.h>
//declaration/prototype
void printhello();
void printGoodbye();

int main(){   //Function Call
    printhello();
    printGoodbye();
     return 0;
}

void printhello(){    // Function defination
    printf("hello world\n");
}

void printGoodbye(){
    printf("Goodbye\n");
}