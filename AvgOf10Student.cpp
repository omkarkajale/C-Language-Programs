#include <stdio.h>
int main() {
    int totalMarks[10]; // Assuming a maximum of 10 students
    int numStudents, i;
    float average = 0.0;
    // Read the number of students
    printf("Enter the number of students in the class: ");
    scanf("%d", &numStudents);
    // Validate the number of students
    if (numStudents <= 0 || numStudents > 10) {
        printf("Invalid number of students. Please enter a valid number.\n");
        return 1;
    }
    // Read the total marks of each student
    printf("Enter the total marks (out of 200) for each student:\n");
    for (i = 0; i < numStudents; i++) {
        printf("Student %d: ", i +1);//it will starts from 1
        scanf("%d", &totalMarks[i]);
        // Validate the total marks
        if (totalMarks[i] < 0 || totalMarks[i] > 200) {
            printf("Invalid total marks for student %d. Please enter a valid total marks.\n", i + 1);
            i--; // Retry input for this student
        }
    }
    // Calculate the average of total marks
    for (i = 0; i < numStudents; i++) {
        average += totalMarks[i];
    }
    average /= numStudents;
    // Display the average
    printf("Average marks of the class: %.2f\n", average);
    return 0;
}

