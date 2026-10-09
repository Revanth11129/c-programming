#include <stdio.h>
int main() {
float  radius  , area ,circumference;


printf(" enter the radius \n");
scanf("%f", &radius);

area = 3.14 * radius * radius;
circumference = 2 * 3.14  * radius;

printf(" are of circle is %f\n", area);
printf("circumference of circle is %f\n", circumference);


return 0;
}
