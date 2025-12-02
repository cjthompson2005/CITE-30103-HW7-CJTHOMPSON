#include <stdio.h>

int main(){
    int a[5];

    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

    int *p=a;

    printf("Values: ");
    for(int i=0;i<5;i++)
        printf("%d ", *(p+i));
}

