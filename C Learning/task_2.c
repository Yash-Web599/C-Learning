//
//  task_2.c
//  C Learning
//
//  Created by apple on 22/09/25.
//

#include <stdio.h>
int main () {
    int input;
    int sum;
    
    printf("Enter any number: ");
    scanf("%d", &input);
    
    for (int i = 0; i<=input; i++) {
        if (i % 2 == 0) {
            sum -= i;
        }
        else {
            sum += i;
        }
    }
    printf("Sum = %d", sum);
}
