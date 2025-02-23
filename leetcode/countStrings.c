#include <stdio.h>
#include <string.h>

void countString(char *phrase, char letter) {
    int counter = 0;
    for(int c=0; c<strlen(phrase); c++){
        if(phrase[c] == letter) {
            counter++;
        }
    }
    printf("The phrase %s has %d letter(s) \n", phrase, counter);
}

int main() {
    char phrase[] = "Gabriel is inteligent";
    char letter = 'a';
    countString(phrase, letter);
}