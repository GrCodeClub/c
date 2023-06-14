/*
Να γραφεί συνάρτηση που θα δέχεται τους βαθμούς Μ φοιτητών σε Ν μαθήματα και θα επιστρέφει τον μέσο όρο του κάθε μαθήματος.
*/

#include <stdio.h>
#include <stdlib.h>

void calculateAverage(float** grades, int M, int N, float* averages) {
    for (int i = 0; i < N; i++) {
        float sum = 0.0;
        for (int j = 0; j < M; j++) {
            sum += grades[j][i];
        }
        averages[i] = sum / M;
    }
}

int main() {
    int M, N;
    printf("Δώστε τον αριθμό των φοιτητών (Μ): ");
    scanf("%d", &M);
    printf("Δώστε τον αριθμό των μαθημάτων (Ν): ");
    scanf("%d", &N);

    // Δημιουργία του πίνακα grades με χρήση της malloc
    float** grades = (float**)malloc(M * sizeof(float*));
    for (int i = 0; i < M; i++) {
        grades[i] = (float*)malloc(N * sizeof(float));
    }

    printf("Δώστε τους βαθμούς για κάθε φοιτητή και μάθημα:\n");
    for (int i = 0; i < M; i++) {
        printf("Φοιτητής %d:\n", i + 1);
        for (int j = 0; j < N; j++) {
            printf("Μάθημα %d: ", j + 1);
            scanf("%f", &grades[i][j]);
        }
    }

    float* averages = (float*)malloc(N * sizeof(float));
    calculateAverage(grades, M, N, averages);

    printf("Ο μέσος όρος για κάθε μάθημα είναι:\n");
    for (int i = 0; i < N; i++) {
        printf("Μάθημα %d: %.2f\n", i + 1, averages[i]);
    }

    // Αποδέσμευση της μνήμης που δεσμεύθηκε με τη malloc
    for (int i = 0; i < M; i++) {
        free(grades[i]);
    }
    free(grades);
    free(averages);

    return 0;
}
