//Print the numbers upto limit using using While Loop in C

#include<stdio.h>
int main()
{
  int s,e;
  printf("\nEnter the starting value:");
  scanf("%d",&s);
  printf("\nEnter the ending value:");
  scanf("%d",&e);
  while(s<=e)
  {
    printf("\n%d",s);
    s++;
  }
  return 0;
}