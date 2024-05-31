#include<stdio.h>

int main(){

    char str[50];
    double salary, t_sell, t_salary;
    scanf("%s\n %lf\n %lf",&str, &salary, &t_sell);

    t_salary = salary+t_sell*.15;

    printf("TOTAL = R$ %.2f\n",t_salary);
    return 0;
}

