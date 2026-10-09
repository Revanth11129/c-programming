#include <stdio.h>
int main() {

int num , count = 0;

printf("enter the number \n");
scanf("%d",&num);

while (num > 0)
{
    count++;
    num = num /10;
}

printf(" number of digits = %d\n", count);

return 0;
}