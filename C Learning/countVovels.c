//
//  countVovels.c
//  C Learning
//
//  Created by apple on 14/10/25.
//

#include <stdio.h>


void countVowels(char str[], int length) {
    int i, count = 0;
    
    for (i = 0; i < length; i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            count++;
        }
    }
    
    printf("%d vowels.\n", count);
}

int main() {
    char name[100];
    int nameLength;
    
    printf("Enter the length of your name: ");
    scanf("%d", &nameLength);
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    
    countVowels(name, nameLength);
    
    return 0;
}
