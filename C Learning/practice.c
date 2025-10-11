#include <stdio.h>

int main() {
    int number;
    
    printf("Enter any Number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0 ) {
        printf("Number IS 0 \n");
    }
    else if (number % 2 == 0){
        printf("Even Number !!! \n");
    }
    else {
        printf("Odd number !!!\n");
    }

    return 0;
}
