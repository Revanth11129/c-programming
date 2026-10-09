#include <stdio.h>

int sum(int n) {
    if(n==1) {
return 1;
    }

    return n + sum(n-1);

}

int main() {

    printf(" sum =%d\n",sum(5));

    return  0;
}

    
