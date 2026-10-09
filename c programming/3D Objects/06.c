#include <stdio.h>
int main() {

float celsisus , fahrenheit;

printf(" input temperature in celsius \n");
scanf("%f", &celsisus);

fahrenheit = (celsisus * 9/5)+32 ;
printf("temperatue in fahrenheit %f\n", fahrenheit);


return 0;
}