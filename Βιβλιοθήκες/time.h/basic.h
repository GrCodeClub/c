#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {

    // Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    // system("chcp 1253"); 
    // Αλλαγή της κωδικοποίησης σε UTF-8
     system("chcp 65001");
     
    time_t currentTime;
    struct tm *localTime;
    char timeString[100];

    // Αποκτήστε την τρέχουσα τοπική ώρα
    currentTime = time(NULL);
    localTime = localtime(&currentTime);

    //Μορφοποιήστε την τοπική ώρα ως αλφαριθμητικό
    strftime(timeString, sizeof(timeString), "%c", localTime);

    // Εμφανίστε την τρέχουσα ημερομηνία και ώρα
    printf("Η τρέχουσα ημερομηνία και ώρα είναι: %s\n", timeString);


    // Υπολογίστε τον αριθμό των δευτερολέπτων που έχουν παρέλθει από την έναρξη της εποχής UNIX
    time_t startOfEpoch = 0;
    time_t secondsSinceEpoch = difftime(currentTime, startOfEpoch);
    printf("Δευτερόλεπτα από την έναρξη της εποχής UNIX: %ld\n", secondsSinceEpoch);

  
    return 0;
}
