#include <stdio.h>

void swap(int *a , int *b );


int main() {

    int x = 10;
    int y = 20;

    printf("before swapping \n");
    printf("x = %d , y=%d", x , y);

    swap(&x,&y);

    printf("\n after swappinf\n");
    printf("x=%d,y = %d", x , y);

return 0;
}

void swap (int *a , int *b) {
int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}