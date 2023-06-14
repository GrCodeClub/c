/*Να γραφεί πρόγραμμα το οποίο θα υλοποιεί το παιχνίδι “Μάντεψε τον Αριθμό” με όρια τυχαίων αριθμών [1..100] και 7 προσπάθειες.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attemptsLeft;
    attemptsLeft = 7;

    // Αρχικοποίηση του γεννήτορα τυχαίων αριθμών
    srand(time(0));

    // Επιλογή τυχαίου αριθμού
    secretNumber = rand() % 100 + 1;

    printf("Καλωσήρθατε στο παιχνίδι 'Μάντεψε τον Αριθμό'!\n");
    printf("Έχετε 7 προσπάθειες να βρείτε τον αριθμό.\n\n");

    // Επανάληψη για τις προσπάθειες του παίκτη
    while (attemptsLeft > 0) {
        printf("Προσπάθεια %d\n", 8 - attemptsLeft);
        printf("Μάντεψε τον αριθμό: ");
        scanf("%d", &guess);

        // Έλεγχος της προσπάθειας του παίκτη
        if (guess == secretNumber) {
            printf("Συγχαρητήρια! Βρήκατε τον αριθμό %d!\n", secretNumber);
            break;
        } else if (guess < secretNumber) {
            printf("Λάθος. Ο αριθμός είναι μεγαλύτερος.\n");
        } else {
            printf("Λάθος. Ο αριθμός είναι μικρότερος.\n");
        }

        attemptsLeft--;

        if (attemptsLeft > 0) {
            printf("Απομένουν %d προσπάθειες.\n\n", attemptsLeft);
        } else {
            printf("Δυστυχώς, δεν βρήκατε τον αριθμό. Ο αριθμός ήταν %d.\n", secretNumber);
        }
    }

    return 0;
}
