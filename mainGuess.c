#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100
#define NTENTATIVIMAX 3

int main() {

    int numero, guess, numeroprove;

    //Inizializzo il seme randomico della sequenza casuale
    srand(time(NULL));

    // Genero un numero casuale
    numero = rand() % ( MAX - MIN + 1 ) + MIN;

    numeroprove = 0;
    printf("%d\n",numero);
    do {
        printf("Indovina il numero tra 1 e %d\n", MAX);
        // Input by user
        scanf("%d", &guess);

        if (guess > numero) {
            printf("Il valore e' minore!\n");

        } else if (numero > guess) {
            printf("Il valore e' maggiore!\n");

        } else
            printf("Hai indovinato il valore in %d tentativi!\n", ( numeroprove + 1 ) );

        numeroprove++;
    } while ( ( numeroprove < NTENTATIVIMAX ) && ( guess != numero ) );

    if( guess == numero )
        printf("Hai vinto!!!\n");
    else
        printf("\nCi dispiace, hai perso. Riprova, sarai piu' fortunato. Il numero da indovinare era %d.\n",guess);

    return 0;
}