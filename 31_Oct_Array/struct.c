#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Person p1;

    strcpy(p1.name, "Alice");
    p1.age = 30;
    p1.salary = 50000.50;

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Salary: %.2f\n", p1.salary);

    return 0;
}
