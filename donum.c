 //Print 1 to 10 using do while loop in C - program example


#include<stdio.h>

int main(){

	
	int a = 1;
	int b = 10;

	
	 do{
		 

		printf("%d\n", a);
		       ++a;

	 }while (a <= b);

	return 0;
}