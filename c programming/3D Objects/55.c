#include <stdio.h>

int main() {

    int a = 10;
    int *ptr = &a;

    

    printf("before %p\n",ptr);

    ptr++;

    printf("after %p\n",ptr);

    return 0;
}