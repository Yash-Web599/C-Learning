//
//  task_3.c
//  C Learning
//
//  Created by apple on 22/09/25.
//

#include <stdio.h>
int main() {
    int number;
    
    printf("Enter any number: ");
    scanf("%d", &number);
    
    for (int i =1; i<=number; i++) {
        if (i % 2 == 0) {
            printf("\t%d", (i-1)*2);
        } else {
            printf("\t%d", i);
        }
    }
    printf("\n");
}
