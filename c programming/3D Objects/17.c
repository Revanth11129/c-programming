#include <stdio.h>
int main () {
int num ;

printf(" enter a number \n");
scanf(" %d",&num);

if(num > 0) {
    printf(" the given number is positive \n");

}

else if (num < 0) {

    printf(" the given number is negative\n");

}

else {

    printf(" the given number is zero\n");
}

return 0;
}