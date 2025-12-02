#include <stdio.h>

struct Student { char name[40]; int roll; float marks; };

int main(){
    struct Student s[5];

    printf("Enter name roll marks for 5 students:\n");
    for(int i=0;i<5;i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    int best=0;
    for(int i=1;i<5;i++)
        if(s[i].marks > s[best].marks)
            best=i;

    printf("Top student: %s %d %.2f\n", s[best].name, s[best].roll, s[best].marks);
}

