#include <stdio.h>

int main() {
    
    // Ακέραιος αριθμός
    int number;
    printf("Παρακαλώ εισάγετε έναν ακέραιο αριθμό: ");
    scanf("%d", &number);
    printf("Ο αριθμός που εισάγατε είναι: %d\n", number);
  
    // Δεκαδικός αριθμός
    float num;
    printf("Παρακαλώ εισάγετε έναν δεκαδικό αριθμό: ");
    scanf("%f", &num);
    printf("Ο αριθμός που εισάγατε είναι: %f\n", num);
    
    //κείμενο
    char name[50];
    printf("Παρακαλώ εισάγετε το όνομά σας: ");
    scanf("%s", name);
    printf("Γεια σας, %s!\n", name);

    return 0;
    return 0;
}
