#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main() {
 double volume,raio;

    scanf("%lf",&raio);

    volume = (4.0/3.0) * pi * pow(raio,3);
    printf("VOLUME = %.3lf\n",volume);

    return 0;
}
