#include <stdio.h>

struct Student { char name[40]; int roll; float marks; };

int main(){
    struct Student s[5];

    printf("Enter name roll marks for 5 students:\n");
    for(int i=0;i<5;i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    for(int i=0;i<5;i++)
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
}

