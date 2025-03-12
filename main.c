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
            scanf("%u", &classe[i].matricola);
        } while (classe[i].matricola < 10000 || classe[i].matricola > 99999);



    do {
        scanf("%d", &classe[i].eta);
    } while (classe[i].eta);

}



    return 0;
}
