#include <stdio.h>

int main() {
    int choice;

    printf("Επιλέξτε μια επιλογή (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Επιλέξατε την επιλογή 1.\n");
            break;
        case 2:
            printf("Επιλέξατε την επιλογή 2.\n");
            break;
        case 3:
            printf("Επιλέξατε την επιλογή 3.\n");
            break;
        default:
            printf("Μη έγκυρη επιλογή.\n");
    }

    return 0;
}
