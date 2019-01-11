#include <stdio.h>

int main() {
int num,hours;
    double money,total;

    scanf("%d",&num);
    scanf("%d",&hours);
    scanf("%lf",&money);

    total = (double) (money * hours);

    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",total);

    return 0;
}
