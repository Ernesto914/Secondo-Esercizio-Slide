#include <stdio.h>

int main(void)
{
    int ora1, ora2, minuti1, minuti2, minutitot, differenza, diffora, diffminuti;
    printf("Inserisci il primo orario (hh mm): ");
    scanf("%d %d", &ora1, &minuti1);
    printf("Inserisci il secondo orario (hh mm): ");
    scanf("%d %d", &ora2, &minuti2);
    minutitot = (ora2 * 60 + minuti2) - (ora1 * 60 + minuti1);
    diffora = minutitot / 60;
    diffminuti = minutitot % 60;
    printf("La differenza di tempo tra le due date in ore e minuti è di: %d ore %d minuti\n", diffora, diffminuti);
    return 0;
}
