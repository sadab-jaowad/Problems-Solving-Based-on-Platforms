#include<stdio.h>

int main(){

    int number,salary;
    float h_rate, t_salary;
    scanf("%d\n %d\n %f",&number, &salary, &h_rate);
    t_salary = salary*h_rate;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",t_salary);
    return 0;
}
