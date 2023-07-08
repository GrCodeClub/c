// Αναστέλλει την εκτέλεση του προγράμματος για έναν συγκεκριμένο χρόνο, σε μονάδες νανοδευτερολέπτων.
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {

    // Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    // system("chcp 1253"); 
    // Αλλαγή της κωδικοποίησης σε UTF-8
     system("chcp 65001");
     

 struct timespec sleepTime, remainingTime;

    // Ορισμός του χρόνου αναμονής
    sleepTime.tv_sec = 2; // Δευτερόλεπτα
    sleepTime.tv_nsec = 500000000; // Νανοδευτερόλεπτα (0.5 δευτερόλεπτα)

    // Κλήση της nanosleep() για την αναστολή της εκτέλεσης
    // για τον καθορισμένο χρόνο
    int result = nanosleep(&sleepTime, &remainingTime);
    if (result == 0) {
        printf("Η αναστολή ολοκληρώθηκε.\n");
    } else {
        printf("Η αναστολή διακόπηκε. Απομένον χρόνος: %ld δευτερόλεπτα, %ld νανοδευτερόλεπτα.\n",
            remainingTime.tv_sec, remainingTime.tv_nsec);
    }
  
    return 0;
}
