#include <stdio.h>

#define BUFFER_SIZE 5

int main() {
    int buffer[BUFFER_SIZE];
    int count = 0;
    int index = 0;
    int input;

    while (1) {
        printf("Enter a value (-1 to stop, -2 to print): ");
        scanf("%d", &input);

        if (input == -1) {
            break;
        }

        if (input == -2) {
            printf("Current buffer (oldest to newest): ");
            for (int i = 0; i < (count < BUFFER_SIZE ? count : BUFFER_SIZE); i++) {
                int printIndex;
                if (count <= BUFFER_SIZE) {
                    printIndex = i;
                } else {
                    printIndex = (index + i) % BUFFER_SIZE;
                }
                printf("%d ", buffer[printIndex]);
            }
            printf("\n");
            continue;
        }

        buffer[index] = input;
        index = (index + 1) % BUFFER_SIZE;
        count++;
    }

    return 0;
}
