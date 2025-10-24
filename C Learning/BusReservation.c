//
//  BusRegistration.c
//  C Learning
//
//  Created by apple on 24/10/25.
//

#include <stdio.h>

#define Max_User 2

struct User{
    
    char username[30];
    char userpass[30];
};

struct User users[Max_User];
int countUser = 0;


void signUp();
int signIn();
int compareText(char str1[], char str2[]);

int compareText(char str1[], char str2[]) {
    
    int i = 0;
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 1;
        i++;
    }
    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else {
        return 1;
    }
}


void signUp() {
    if (countUser >= Max_User) {
        printf("User limit reached!\n");
        return;
    }
    
    printf("\n=== SIGN UP ===\n");
    printf("Enter username: ");
    scanf("%s", users[countUser].username);
    printf("Enter password: ");
    scanf("%s", users[countUser].userpass);
    
    countUser++;
    
    printf("Account created successfully!\n");
    
}

int signIn() {
    
    char name[30], pass[30];
    int i, found = 0;
    
    printf("\n=== SIGN IN ===\n");
    printf("Username: ");
    scanf("%s", name);
    printf("Password: ");
    scanf("%s", pass);
    
    for (i = 0; i < countUser; i++) {
        if (compareText(name, users[i].username) == 0 && compareText(pass, users[i].userpass) == 0) {
            found = 1;
            break;
        }
    }
    
    if (found == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    
    int choice, loggedIn = 0;
    
    do {
        printf("                *************BUS  RESERVATION SYSTEM************\n");
        printf("                ________________________________________________\n");
        printf("1. Sign Up\n");
        printf("2. Sign In\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                signUp();
                break;
                
            case 2:
                loggedIn = signIn();
                
                if (loggedIn == 1) {
                    printf("Login successful. Welcome, %s\n", users[countUser-1].username);
                } else {
                    printf("Wrong username or password!\n");
                }
                break;
                
            case 3:
                printf("Goodbye!\n");
                return 0;
                break;
                
            default:
                printf("Invalid choice, try again.\n");
                break;
        }
    } while (1);
    
    return 0;
}
