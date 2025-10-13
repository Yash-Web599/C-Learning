#include <stdio.h>


    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(int a, int b) {
        if (b != 0)
            return (float)a / b;
        else {
            printf("Division by zero is not allowed.\n");
            return 0;
        }
    }

int main() {
    int num1, num2, choice;
    float result;
    
    
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    
    printf("Enter second numbers: ");
    scanf("%d", &num2);
    
    do {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %d\n", add(num1, num2));
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %d\n", subtract(num1, num2));
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %d\n", multiply(num1, num2));
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0)
                    printf("Result: %.2f\n", result);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);
    
    return 0;
}

