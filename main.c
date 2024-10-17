#include <stdio.h>

int main() {
    int i;
    int N;
    int numero;
    int somma;
    printf("quanti numeri vuorrei inserire");
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        printf("inserisci il numero%d: ",i+1);
        scanf("%d",&numero);
    }
    if(numero<0) {
        somma+= -numero;
    }else {
        somma+= numero;
    }
    printf("la somma dei valori assoluti e':%d\n",somma);
    return 0;
}
