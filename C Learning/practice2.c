//
//  practice2.c
//  C Learning
//
//  Created by apple on 26/09/25.
//

#include "practice2.h"


int main() {
    int num, sum = 0;

    printf("Enter numbers 0 to stop:\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        sum += num;
    }

    printf("Total Sum = %d\n", sum);

    return 0;
}
