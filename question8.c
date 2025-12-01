#include <stdio.h>

int main(){
    int n, x, even=0, odd=0;

    printf("Enter how many numbers: ");
    scanf("%d",&n);

    printf("Enter %d integers: ", n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x % 2 == 0) even++;
        else odd++;
    }

    printf("Even = %d\nOdd = %d\n", even, odd);
}

