#include <stdio.h>

#define TOTAL_NUMBERS 5

int main() {
    int numbers[TOTAL_NUMBERS];
    int max_value;
    int position = 1; // Start counting from 1st input

    printf("Input %d integers:\n", TOTAL_NUMBERS);

    for(int i = 0; i < TOTAL_NUMBERS; i++) {
        scanf("%d", &numbers[i]);

        // On first input, set it as max
        if(i == 0) {
            max_value = numbers[i];
        } else {
            if(numbers[i] > max_value) {
                max_value = numbers[i];
                position = i + 1; // Position starts from 1
            }
        }
    }

    printf("Highest value: %d\n", max_value);
    printf("Position: %d\n", position);

    return 0;
}
