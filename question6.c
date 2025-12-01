#include <stdio.h>

int main(){
    int n, a[100], sum=0;

    printf("Enter number of integers: ");
    scanf("%d",&n);

    printf("Enter %d integers: ", n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }

    printf("Sum = %d\nAverage = %.2f\n", sum, sum/(float)n);
}

