
#include <stdio.h>
int main() {

int a[5], i , sum = 0;
float average;

printf("enter 5 numbers \n");

for ( i = 0; i < 5; i++) {
scanf("%d",&a[i]);
}
  for ( i = 0; i < 5; i++) {
    sum = sum + a[i];
  }
        printf(" sum = %d \n",sum);
    
    for (size_t i = 0; i <5; i++) {
    }

    average = sum / 5.0;
    
        
    printf(" average = %f",average);
    
    

    

        printf("%d",a[i]);
    
    
    return 0;
}