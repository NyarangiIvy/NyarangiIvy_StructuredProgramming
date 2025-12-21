#include <stdio.h>

int main() {

    int num = 10;
    int *ptr;
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value stored in ptr (Address): %p\n", ptr);
    printf("Value accessed using *ptr: %d\n", *ptr);


    int count = 10;
    int *pCount = &count;

    *pCount = 20;
    printf("\nUpdated value of count: %d\n", count);

    return 0;
}
