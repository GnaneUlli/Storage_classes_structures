#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    int marks[5];
    float average;
};

void read(struct Student *student) {
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);
    
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student->marks[i]);
    }
}

void display(struct Student student) {
    printf("Student Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    
    printf("Marks in 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, student.marks[i]);
    }
    
    printf("Average Marks: %.2f\n", student.average);
}

void calculateAverage(struct Student *student) {
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += student->marks[i];
    }
    
    student->average = (float)sum / 5;
}

int main() {
    struct Student student;

    read(&student);
    calculateAverage(&student);
    display(student);

    return 0;
}

