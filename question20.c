#include <stdio.h>

struct Student { char name[40]; int roll; float marks; };

void printStudent(struct Student s){
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}

int main(){
    struct Student s;

    printf("Enter name roll marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    printStudent(s);
}

