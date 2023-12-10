#include <stdio.h>
#include <math.h>
#include <conio.h>

/*)
float broj1;
float broj2;
float resultat;

int main() {
     printf("Unesite prvi broj: ");
     scanf("%f", &broj1);
     printf("Unesite drugi broj: ");
     scanf("%f", &broj2);
     resultat = broj1 + broj2;
     printf("Suma brojeva je %.1f", resultat);
}
*/

int main() {
    int broj;
    printf("Unesite broj: ");
    scanf("%d", &broj);

    int faktorijal = 1;
    for (int f = broj; f >= 1; f--) {
        faktorijal *= f;
    }
    printf("Faktorijal broja %d! jeste %d\n", broj, faktorijal);

    return 0;
}

