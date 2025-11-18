

#include <stdio.h>

int main() {

    int first_number;
    int second_number;
    //declare the variables
    int answer_add;
    int answer_subtract;
    int answer_multiply;
    int answer_divide;
    int answer_remainder;

    printf("Please type in your first whole number: ");
    scanf("%d", &first_number);

    printf("Please type in your second whole number: ");
    scanf("%d", &second_number);

    answer_add = first_number + second_number;
    answer_subtract = first_number - second_number;
    answer_multiply = first_number * second_number;

    if (second_number != 0) {
        answer_divide = first_number / second_number;
        answer_remainder = first_number % second_number;
    } else {

        answer_divide = 0;
        answer_remainder = 0;
    }

    printf("%d + %d = %d\n", first_number, second_number, answer_add);
    printf(" %d - %d = %d\n", first_number, second_number, answer_subtract);
    printf(" %d * %d = %d\n", first_number, second_number, answer_multiply);

    if (second_number != 0) {
        printf("%d / %d = %d\n", first_number, second_number, answer_divide);
        printf(" %d %% %d = %d\n", first_number, second_number, answer_remainder);
    } else {
        printf(" 0!\n");
        printf("0\n");
    }

    return 0;
}
