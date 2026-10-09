#include <stdio.h>
int main() {

int num , i , count = 0;

printf("enter a number\n ");
scanf("%d",&num );

while (num > 0) {
count++;
num = num/10;
}

printf("sum= %d\n" , count);

return 0;
}
