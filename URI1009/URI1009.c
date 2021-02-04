#include <stdio.h>

int main(){
    char nome;
    double fixo, vendas, montante;

    scanf("%s", &nome);
    scanf("%lf", &fixo);
    scanf("%lf", &vendas);

    montante = fixo + 0.15*vendas;

    printf("TOTAL = R$ %0.2lf\n", montante);

    return 0;
}
