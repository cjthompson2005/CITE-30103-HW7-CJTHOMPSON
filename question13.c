#include <stdio.h>
#include <ctype.h>

int main(){
    char s[100];
    printf("Enter text: ");
    fgets(s,100,stdin);

    int v=0,c=0,d=0;

    for(int i=0;s[i];i++){
        if(isdigit(s[i])) d++;
        else if(isalpha(s[i])){
            char ch=tolower(s[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }

    printf("Vowels=%d Consonants=%d Digits=%d\n", v,c,d);
}

