#include <stdio.h>

int multiply(int a , int b);

int main() {
int result ;

result = multiply(5,10);

printf("multiply = %d\n",result);
return 0;

}

int multiply(int a , int b) {
    return a*b;
}