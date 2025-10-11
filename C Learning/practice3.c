
  practice3.c
  C Learning

  Created by apple on 26/09/25.


#include <stdio.h>

    int sum (int* , int*);

    int sum(int* x, int* y) {
        *x = 4;
        return (*x + *y);
    }

int main() {
    
    int a = 1 , b = 2;
    printf("Sum of 1 and 2 : %d\n", sum(&a , &b));
    printf("Value of a : %d\n", a);
    
    return 0;
}
