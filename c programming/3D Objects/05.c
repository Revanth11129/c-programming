#include <stdio.h>
int main() {

int area , perimeter, length , breadth;

printf(" enter the length and breadth\n");
scanf("%d%d",&length , &breadth);

area = length * breadth ;
perimeter = 2*(length + breadth);

printf("area of rectangle is %d\n", area);
printf("perimeter of rectangle is %d\n", perimeter);

return 0;
}
