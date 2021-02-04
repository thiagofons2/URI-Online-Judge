#include <stdio.h>

int main(){
    int numero, qntd;
    float valor, salario;

    scanf("%d", &numero);
    scanf("%d", &qntd);
    scanf("%f", &valor);

    salario = qntd * valor;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %0.2f\n", salario);

    return 0;
}