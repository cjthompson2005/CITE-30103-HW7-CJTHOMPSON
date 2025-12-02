#include <stdio.h>

struct Date { int day, month, year; };

struct Student {
    char name[40];
    int roll;
    float marks;
    struct Date dob;
};

int main(){
    struct Student s;

    printf("Enter name roll marks and DOB (dd mm yyyy): ");
    scanf("%s %d %f %d %d %d",
          s.name, &s.roll, &s.marks,
          &s.dob.day,&s.dob.month,&s.dob.year);

    printf("%s %d %.2f %02d/%02d/%04d\n",
        s.name, s.roll, s.marks,
        s.dob.day, s.dob.month, s.dob.year);
}

