#include <stdio.h>

int main() {
    char name[20];
    int age;
    float marks;
    printf("Enter student's name,age,marks: ");
    scanf(" %s %d %f", name, age, marks);  
    printf("name: %s\nage %d\n marks: %.2f", name, age, marks);
    return 0;
}