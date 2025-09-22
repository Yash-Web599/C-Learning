//
//  task_1.c
//  C Learning
//
//  Created by apple on 22/09/25.
//

#include <stdio.h>
int main() {
    int number;
    
    
    printf("Enter Any number: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++) {
        if (i % 3 ==0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if(i % 3 == 0){
            printf("Fizz\n");
        } else if (i % 5 == 0){
            printf("Buzz\n");
        }
        else {
            printf("%d\n",i);
        }
        
    }
    return 0;
}
