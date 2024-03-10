#include<stdio.h>
#include<math.h>



/*int main(){
    int n=4;
    //printf("enter num ;");
    //scanf("%d\n",&n);

    printf("%f",pow(n,2));

    return 0;

}*/

float squareArea(float side);
float circleArea(float rad);
float rectangle(float a, float b);

int main(){
    float a=5.00;
    float b=10.0;
    printf("area is %f\n",rectangle(a,b));

    return 0;

}

float squareArea(float side){
    return side*side;
}

float circleArea(float rad){
    return 3.14*rad*rad;
}

float rectangle(float a, float b){
    return a*b;
}
