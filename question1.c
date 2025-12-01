#include <stdio.h>

float toCelsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
	printf("Input temperature in F: ");
    float f;
    scanf("%f", &f);
    printf("%.2f\n", toCelsius(f));
    return 0;
}

