#include<stdio.h>
#include<string.h>

//user defiend
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll=1164;
    s1.cgpa=9.7;
    //s1.name="boso"
    strcpy(s1.name,"boso");
    printf("student name=%s\n",s1.name);
    printf("student roll no=%d\n",s1.roll);
    printf("student cgpa=%f\n",s1.cgpa);
    return 0;
}