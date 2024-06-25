#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n, hits = 0;

    printf("Enter number of samples: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        double z = x * x + y * y;
        if (z <= 1) {
            hits++;
        }
    }

    double pi = (double) hits / n * 4;
    printf("Approximate value of pi: %lf\n", pi);

    return 0;
}

