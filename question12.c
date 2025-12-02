#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Enter a word: ");
    scanf("%s", s);

    int len = strlen(s), pal=1;

    for(int i=0;i<len/2;i++)
        if(s[i] != s[len-1-i]) pal=0;

    printf(pal ? "Palindrome\n" : "Not Palindrome\n");
}

