#include <stdio.h>

int cube (int);

int main() {
    int result ;

    result = cube(4);

    printf("cube = %d",result);

    return 0;
}

int cube(int n) {

    return n*n*n;
}


