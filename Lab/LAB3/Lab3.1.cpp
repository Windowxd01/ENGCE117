#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade(struct student *child);

int main() {
    struct student aboy;
    aboy.sex = 'M';
    aboy.gpa = 0.00;
    upgrade(&aboy);
    printf("%.2f", aboy.gpa);
    return 0;
}

void upgrade(struct student *child) {
    if (child->sex == 'M') {
        child->gpa *= 1.10; // Increase GPA by 10% for males
    } else if (child->sex == 'F') {
        child->gpa *= 1.20; // Increase GPA by 20% for females
    }
}