#include <stdio.h>

int main(){
    double raio, area;

    scanf("%lf", &raio);
    area = 3.14159 * raio * raio;

    printf("A=%0.4f\n", area);

    return 0;
}