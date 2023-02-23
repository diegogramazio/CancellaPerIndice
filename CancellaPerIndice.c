#include <stdio.h>

/* Programma che legge una sequenza di interi dall'utente, legge un indice
 * e crea una nuova sequenza che contiene tutti gli elementi della precedente,
 * tranne quello con l'indice fornito dall'utente; la nuova sequenza viene stampata. */
int main() {
      int lunghezza;         // lunghezza della sequenza
      int indice;              // indice da cancellare

      /* leggi la lunghezza della sequenza */
      printf("Caro utente, quanti numeri hai intenzione di introdurre?\n");
      scanf("%d", &lunghezza);

      /* leggi la sequenza */
      int sequenza[lunghezza];
      for(int i=0; i<lunghezza; i++) {
            printf("Caro utente, introduci un numero.\n");
            scanf("%d", &sequenza[i]);
      }

      /* leggi l'indice da cancellare */
      printf("Caro utente, quale indice vuoi cancellare?\n");
      scanf("%d", &indice);

      /* controlla se l'indice e' valido */
      if(indice<0 || indice>=lunghezza)
            printf("L'indice non e' valido\n");
      else {       // indice valido

            /* crea un nuovo array */
            int nuovaLunghezza = lunghezza-1;
            int nuovaSequenza[nuovaLunghezza];

            /* i valori fino ad indice-1 sono uguali */
            for(int i=0; i<indice; i++)
                  nuovaSequenza[i] = sequenza[i];

            /* per i successivi si scala di un indice */
            for(int i=indice; i<nuovaLunghezza; i++)
                  nuovaSequenza[i] = sequenza[i+1];


            /* stampa un messaggio per l'utente */
            printf("Ecco la nuova sequenza: ");
            for(int i=0; i<nuovaLunghezza; i++)
                  printf("%d", nuovaSequenza[i]);
            printf("\n");
            system("PAUSE");
      }
}
