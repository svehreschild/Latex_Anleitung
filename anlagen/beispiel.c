#include <stdio.h>

// Funktion zur Berechnung von e^x mit der Taylorreihe
double exp_approx(double x, int N) {
    double sum = 1.0; // Summe der Terme
    double term = 1.0; // Erster Term x^0 / 0! = 1

    for (int n = 1; n <= N; n++) {
        term *= x / n; // Neuer Term: x^n / n!
        sum += term;   // Aufsummieren
    }
    
    return sum;
}

int main() {
    double x = 1.0; // Stelle, an der e^x approximiert wird
    int N = 10;     // Anzahl der Terme in der Taylorreihe

    printf("e^%.2f mit %d Termen: %.10f\n", x, N, exp_approx(x, N));
    return 0;
}