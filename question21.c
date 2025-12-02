#include <stdio.h>

int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);

    int *p = &x;

    printf("Value = %d\n", x);
    printf("Address = %p\n", (void*)&x);
    printf("Dereferenced = %d\n", *p);
}

