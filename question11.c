#include <stdio.h>

int main(){
    char s[100];
    printf("Enter a word: ");
    scanf("%s", s);

    int i=0;
    while(s[i] != '\0') i++;

    printf("Length = %d\n", i);
}

