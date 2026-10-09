#include <stdio.h>
void printnum(int n){
if (n==0) {
    return ;
}
printf("%d\n",n);
printnum(n - 1);
}

int main() {

    printnum(5);

    return 0;
}