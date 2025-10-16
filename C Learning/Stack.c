//
//  main.c
//  C Learning
//
//  Created by apple on 22/09/25.
//

#include <stdio.h>

int stack[5];
int top = -1;

void push(Value) {          // push = insert
    
    if (top == 4) {
        printf("Stack Overflow! %d.\n", Value);
    } else {
        stack[++top] = Value;
        printf("%d inserted into the Stack", Value);
    }
}

int pop(int size) {         // pop = delete
    
    int popped = stack[top];
    top--;
    printf("%d deleted from stack. \n", popped);
    return popped;
    
}

void show() {
    
    for (int i = top; i>=0; i--) {
        printf("%d\n", stack[i]);
        
    }
}

int main () {
    
    int i, choices, Value;
    int size = 5;
    
    printf("Enter %d Elements for the stack :\n ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &stack[i]);
        top++; // top = -1 + 1 = 0
        //stack[0++]
    }
    
    do {
        printf("\n--- MENU---\n");
        printf("1. Delete\n");
        printf("2. View\n");
        printf("3. Insert\n");
        printf("4. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choices);
        
        switch (choices) {
            case 1:
                pop(size);
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
                printf("Exiting Program \n");
                break;
                
            default:
                printf("Invalid Choice !!!");
        }
        
        
    } while(choices != 4 );
    return 0;
}
