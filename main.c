#include <stdio.h>

int main() {
    int arr[101];
    int n, i, val, pos;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &val);
    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &pos);

    printf("The current list of the array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;
    n++;

    printf("\nAfter Insert the element the new list is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
