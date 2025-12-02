#include <stdio.h>
#include <ctype.h>

int main(){
    char s[100];
    printf("Enter a sentence: ");
    fgets(s,100,stdin);

    int count=0, inWord=0;

    for(int i=0;s[i];i++){
        if(!isspace(s[i]) && !inWord){
            inWord=1;
            count++;
        }
        if(isspace(s[i])) inWord=0;
    }

    printf("Words = %d\n", count);
}

