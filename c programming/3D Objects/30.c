#include <stdio.h>
int main() {
int num , i , count = 0 ;


printf(" enter anumber \n ");
scanf("%d",&num);

while (num > 0) {
count++;
num = num/10;
}

    printf("%d\n",count);




return 0;
}




