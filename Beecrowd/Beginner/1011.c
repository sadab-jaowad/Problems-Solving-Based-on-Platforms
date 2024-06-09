#include <stdio.h>

int main() {

   int radius;
   double volume, pi = 3.14159;
   scanf("%d",&radius);
   volume = (4.0/3)*pi*radius*radius*radius;
   printf("VOLUME = %.3lf\n",volume);
   return 0;

}
