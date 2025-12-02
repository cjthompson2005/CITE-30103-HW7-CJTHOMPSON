#include <stdio.h>

struct Student { char name[40]; int roll; float marks; };

int main(){
    struct Student s;
    printf("Enter name roll marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("%s %d %.2f\n", s.name, s.roll, s.marks);
}

