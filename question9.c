#include <stdio.h>

int main(){
    int a[5];

    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<2;i++){
        int t=a[i];
        a[i]=a[4-i];
        a[4-i]=t;
    }

    printf("Reversed: ");
    for(int i=0;i<5;i++)
        printf("%d ", a[i]);
}

