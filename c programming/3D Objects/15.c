#include <stdio.h>
int main() {

int num  ;

printf(" enter a number \n");
scanf("%d",&num);

if (num > 100) {

    printf("the number is greater than 100");

}

else if (num < 100) {

 printf("100 is greater than the given number\n");
}

else {

    printf(" the number is equal to 100\n");
}

return 0;
}