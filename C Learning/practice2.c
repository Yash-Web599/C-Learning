#include <stdio.h>

int main() {
    int marks[15];
    char names[3];
    int i;
    int highest = 0;
    int student = 0;

    printf("Enter marks of 3 students (5 subjects each):\n");
    
    printf("Enter names of 3 students:\n");
       for (i = 0; i < 3; i++) {
           printf("Student %d name: ", i + 1);
           scanf("%s", names[i]);
       }

    for (i = 0; i < 15; i++) {
        printf("Enter mark %d: ", names[i]);
        scanf("%d", &marks[i]);

        if (marks[i] > highest) {
            highest = marks[i];
            student = i / 5 + 1;   // find which student (1, 2, or 3)
        }
    }

    printf("\nMarks entered are:\n");
    for (i = 0; i < 15; i++) {
        printf("%d ", marks[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");  // move to next line after every 5 marks
        }
    }

    printf("\nHighest marks is %d by Student %d\n", highest, student);

    return 0;
}
