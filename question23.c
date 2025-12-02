#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter number of integers: ");
    scanf("%d",&n);

    int *p = malloc(n*sizeof(int));

    int sum=0;
    printf("Enter %d integers: ", n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum += p[i];
    }

    printf("Average = %.2f\n", sum/(float)n);

    free(p);
}

