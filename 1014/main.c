#include <stdio.h>

int main() {
    int x;
    double y,distancia;
    scanf("%d%lf",&x,&y);
    distancia = (double)x/y;

    printf("%.3lf km/l\n",distancia);

    return 0;
}
