#include <stdio.h>
int main() {

char ch ;

printf(" enter a alphabet \n");
scanf("%c",&ch);

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
printf("the given alphabet is vowel\n");

}

else {

    printf("the given alphabet is consonant\n");
}
return 0;
}