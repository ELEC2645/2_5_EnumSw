// ELEC2645 Unit 1.2 Activity 5 - Enum and Switch
// Write a program that reads a score and determines the corresponding band using if/else and switch statements.
// The grade bands are defined using an enum.


#include <stdio.h>

// good practice to use the enum name as a prefix for the enum values, so you know where they come from
enum Grade { GRADE_INVALID, GRADE_FAIL, GRADE_PASS};

const int pass_mark = 50;
const int merit_mark = 60;


int main(void) {
    int score;
    enum Grade currentGrade;

    /* Input score */
    printf("Enter score (0-100): ");
    scanf("%d", &score);


    // Step 1: Complete the if/else statement to set currentGrade based on score

    /* Decide band using if/else */
    if (score < 0 || score > 100) {
        currentGrade = GRADE_INVALID;
    } else if (score < pass_mark) {
        currentGrade = GRADE_FAIL;
    } else if (score < merit_mark) {
        currentGrade = GRADE_PASS;
    }

    printf("Score: %d\n", score);

    // Step 2: Print message using switch
    // Make sure each printf ends with a newline (\n) for the test script to work!

    switch (currentGrade) {
        case GRADE_FAIL:
            printf("Grade: Fail :( \n");
            break;
        default:

            break;
    }

    return 0;
}
