#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure to store student info
struct Student {
    int id;
    char name[50];
    char room[10];
};

// Global student array and count
struct Student students[MAX];
int count = 0;

// Function declarations
void addStudent();
void listStudents();
void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int choice;
    while (1) {
        printf("\n--- Hostel Management System ---\n");
        printf("1. Add Student\n");
        printf("2. List All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                listStudents();
                break;
            case 3:
                printf("Exiting the system. Goodbye!\n");
                return;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

void addStudent() {
    if (count >= MAX) {
        printf("Hostel is full!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);  // handles spaces

    printf("Enter Room Number: ");
    scanf(" %s", students[count].room);

    printf("\n✅ Student Added Successfully:\n");
    printf("ID: %d\n", students[count].id);
    printf("Name: %s\n", students[count].name);
    printf("Room: %s\n", students[count].room);

    count++;
}

void listStudents() {
    if (count == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Room: %s\n",
            students[i].id,
            students[i].name,
            students[i].room);
    }
}
