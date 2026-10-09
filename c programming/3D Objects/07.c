#include <stdio.h>
int main() {

int num1 = 5;
int num2 = 10;
int temp;

printf(" befor swap \n");
printf("first number %d \n",num1);
printf(" second number %d\n",num2);

temp = num1;
num1 = num2; 
num2 = temp;

printf( " after swap \n");
printf(" first number %d\n", num1);
printf(" second number %d\n", num2);

return 0;
}