#include <stdio.h>

long factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    if(n < 0) printf("Error: negative number\n");
    else printf("Factorial: %ld\n", factorial(n));
}

