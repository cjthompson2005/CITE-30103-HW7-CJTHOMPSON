#include <stdio.h>

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Before: %d %d\n", a,b);
    swap(&a,&b);
    printf("After: %d %d\n", a,b);
}

