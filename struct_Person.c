#include <stdio.h>

// Δήλωση της δομής
struct Person {
    char name[50]; // Πεδίο για το όνομα του ατόμου
    int age; // Πεδίο για την ηλικία του ατόμου
    float height; // Πεδίο για το ύψος του ατόμου
};

int main() {
    // Δημιουργία μιας μεταβλητής τύπου struct Person
    struct Person person;

    // Ανάθεση τιμών στα πεδία της δομής
    strcpy(person.name, "John"); // Αντιγραφή του ονόματος "John" στο πεδίο name
    person.age = 30; // Ανάθεση της ηλικίας 30 στο πεδίο age
    person.height = 1.75; // Ανάθεση του ύψους 1.75 στο πεδίο height

    // Εκτύπωση των πεδίων της δομής
    printf("Όνομα: %s\n", person.name); // Εκτύπωση του ονόματος
    printf("Ηλικία: %d\n", person.age); // Εκτύπωση της ηλικίας
    printf("Ύψος: %.2f\n", person.height); // Εκτύπωση του ύψους

    return 0;
}
