#include <stdio.h>
#include <stdlib.h>
int main() {
    int casa=1;
    double grao=1, totalGrao=1;
    for (casa = 2; casa <= 64 ; casa++) {
        grao *= 2;
        totalGrao+= grao;
    }
    printf("Rainha tem pagar. Total em graos: %.0lf \n", totalGrao);
    printf("Tamanho de um inteiro em bytes: %d \n", sizeof(int));
    return 0;
}
