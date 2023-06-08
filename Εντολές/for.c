#include <stdio.h>
int main() {
// Ας υποθέσουμε ότι θέλετε να εκτυπώσετε τους αριθμούς από το 1 έως το 10 χρησιμοποιώντας έναν βρόχο fo
  int i;
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
  
  // Πως να εκτυπώσουμε μια λίστα αριθμών με for
  int numbers[] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
  
    return 0;
}
