#include <stdio.h>

int main() {
    int choice;

    printf("Επιλέξτε μια επιλογή (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Επιλέξατε την επιλογή 1.\n");
    }
    else if (choice == 2) {
        printf("Επιλέξατε την επιλογή 2.\n");
    }
    else if (choice == 3) {
        printf("Επιλέξατε την επιλογή 3.\n");
    }
    else {
        printf("Μη έγκυρη επιλογή.\n");
    }

    return 0;
}
