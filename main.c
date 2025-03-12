#include <stdio.h>


#define MAX_STUDENTI 3
typedef struct {
    unsigned  int matricola;
    int eta;
    float media;
} studente;


int main(void) {
    studente classe[MAX_STUDENTI];
    for(int i = 0; i< MAX_STUDENTI;i++) {
        printf("inserisci dati dello studente %d\n", i + 1);
        do {
            printf("inserisci matricola\n");
            scanf("%u", &classe[i].matricola);
        } while (classe[i].matricola < 10000 || classe[i].matricola > 99999);
    do {
        printf("inserisci eta\n");
        scanf("%d", &classe[i].eta);
    } while (classe[i].eta < 13);
    do {
        printf("inserisci media\n");
        scanf("%f", &classe[i].media);
    } while (classe[i].media < 1.0 || classe[i].media > 10.0);
}
    for(int i = 0; i< MAX_STUDENTI;i++) {
        printf("studente: %d  matricola %u eta %d media %2.f\n", i+1, classe[i].matricola,classe[i].eta, classe[i].media);

    }


    return 0;
}
