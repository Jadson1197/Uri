#include <stdio.h>
#define bonus 0.15

int main() {
 char name[25];
    double salary,sales,total;


    fgets(name,25,stdin);
    scanf("%lf",&salary);
    scanf("%lf",&sales);

    total = salary + (sales * bonus);

    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
