#include <stdio.h>

int main() {

    int arr[5] = {5,10,15,20,25};

    printf("%d\n",arr[2]);
    printf("%d\n",*(arr + 2));

    return 0;
}