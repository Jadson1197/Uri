#include <stdio.h>

int main() {

    int qtd1,cod1,qtd2,cod2;
    double val1,val2,total,total1,total2;

    scanf("%d%d%lf",&cod1,&qtd1,&val1);
    scanf("%d%d%lf",&cod2,&qtd2,&val2);

    total1 = (double) (qtd1 * val1);

    total2 = (double) (qtd2 * val2);

    total = total1 + total2;

    printf("VALOR A PAGAR: R$ %.2lf\n",total);

    return 0;
}
