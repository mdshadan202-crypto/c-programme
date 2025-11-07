#include <stdio.h>
int main()
{
    char name[20];
    int age;
    float marks;
    printf("Enter name:");
    scanf("%S, name");
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter marks:");
    scanf("%f",&marks);
    printf("\nstudent Details:\n ");
    printf("name:%s\nage:%d\nmarks:%.2f\n",name,age,marks);
    return 0;
}