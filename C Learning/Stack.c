//
//  main.c
//  C Learning
//
//  Created by apple on 22/09/25.
//

#include <stdio.h>

int stack[5];
int top = -1;

int totalInsert = 0;
int totalDelete = 0;

int Menu();


    void push(int Value) {          // push = insert
        if (top == 4) {
            printf("Stack Overflow! %d cannot be inserted.\n", Value);
        } else {
            stack[++top] = Value;
            totalInsert++;
            printf("%d inserted into the Stack\n", Value);
        }
    }

    int pop() {             // pop = delete
        if (top == -1) {
            printf("Stack is empty! Nothing to delete.\n");
        return -1;
    }
        
    int popped = stack[top];
    top--;
    totalDelete++;
    printf("%d deleted from stack.\n", popped);
    return popped;
}

    void show() {
        if (top == -1) { // Empty check
            printf("Stack is empty! No records to show.\n");
            return;
        }
        
        printf("Stack elements are:\n");
            for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

void clearScr() {
    for (int i = 0; i < 50; i++) {
        printf("\n");
    }
}

int report() {
    
    int choices;
    clearScr();
    
    do {
        printf("\n---Report---\n");
        printf("1. Total Insert\n");
        printf("2. Total Delete\n");
        printf("3. Return Back\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choices);
        
        switch(choices) {
            case 1:
                printf("Total Insert: %d\n", totalInsert);
                break;
                
            case 2:
                printf("Total Delete: %d\n", totalDelete);
                break;
                
            case 3:
                printf("Returning Back...\n");
                clearScr();
                return 0;
                
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (1);
    
}

int Menu() {
    
    int choices, Value;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Delete\n");
        printf("2. View\n");
        printf("3. Insert\n");
        printf("4. Report\n");
        printf("5. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choices);
        
        switch (choices) {
            case 1:
                pop();
                break;
                
            case 2:
                show();
                break;
                
            case 3:
                printf("Enter Number to insert: ");
                scanf("%d", &Value);
                push(Value);
                break;
                
            case 4:
                report();
                break;
                
            case 5:
                printf("Exiting Program...\n");
                return 0;
                
            default:
                printf("Invalid Choice !!!\n");
        }
    } while (1);
    
}

int main () {
    int i, Value;
    int size = 5;
    
    printf("Enter %d Elements for the stack:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &stack[i]);
        top++;
        totalInsert++;
    }
    
    Menu();

    return 0;
}
