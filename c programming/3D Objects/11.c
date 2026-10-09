#include <stdio.h>
int main() {

int num1;
int num2;
int num3;

 printf(" enter three number\n");
 scanf("%d%d%d",&num1,&num2,&num3);

 if (num1>num2 && num1>num3) {
 printf("num1 is greater\n");

 }

 else if (num1<num2 && num2>num3) {

    printf(" num2 is greater \n");

 }

 else if(num3>num1 && num2<num3) {

    printf("num3 is greater\n");
 }

 else{
    printf("two numbers are equal");
 }
 return 0;
}