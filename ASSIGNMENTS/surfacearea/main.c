#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>    // This line lets us use functions like printf and scanf

int main() {

    float radius;
    float surface_area;

    const float PI = 3.14159;

    //input
    printf("Enter the radius of the sphere: ");


    scanf("%f", &radius);


    // Step 2: Calculate
    // The formula is A = 4 * PI * r * r
    surface_area = 4 * PI * radius * radius;

    //Step 3: Display Output
    printf("The surface area is: %f\n", surface_area);
    // final answer to the user

    return 0;
}
