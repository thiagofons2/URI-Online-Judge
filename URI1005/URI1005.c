#include <stdio.h>

int main(){
    double a, b, media;

    scanf("%lf", &a);
    scanf("%lf", &b);

    media = (3.5*a + 7.5*b)/11;

    printf("MEDIA = %0.5lf\n", media);

    return 0;
}