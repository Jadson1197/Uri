#include <stdio.h>
#define pa 2
#define pb 3
#define pc 5


int main() {

    double A,B,C,media;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);


    media = ((A * pa) + (B * pb) + (C * pc)) / (pa + pb + pc);

    printf("MEDIA = %.1lf\n",media);

    return 0;
}
