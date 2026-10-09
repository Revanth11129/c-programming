#include <stdio.h>
int main() {
int i , X;

printf(" enter a number X \n");
scanf("%d",&X);


for ( i = 0; i <= 10; i++)

{
    printf("%d * %d = %d  \n", X , i , X * i);
}

return 0;

}