#include <stdio.h>

int main(){
    char a[200], b[100];

    printf("Enter string 1: ");
    scanf("%s", a);

    printf("Enter string 2: ");
    scanf("%s", b);

    int i=0;
    while(a[i]) i++;

    for(int j=0;b[j];j++)
        a[i++] = b[j];

    a[i] = '\0';

    printf("Combined: %s\n", a);
}

