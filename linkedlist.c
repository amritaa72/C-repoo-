LAb 4 : program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
    struct Student *next;
};

struct Student *head = NULL;

void insertStudent() {
    struct Student *newNode = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter Roll Number: ");
    scanf("%d", &newNode->rollNo);

    printf("Enter Name: ");
    scanf("%s", newNode->name);

    printf("Enter Marks: ");
    scanf("%f", &newNode->marks);

    newNode->next = head;
    head = newNode;
}

void displayStudents() {
    struct Student *temp = head;

    if (temp == NULL) {
        printf("No student records found.\n");
        return;
    }

    printf("\nStudent Information:\n");
    while (temp != NULL) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               temp->rollNo, temp->name, temp->marks);
        temp = temp->next;
    }
}

void sortByRollNumber() {
    struct Student *i, *j;
    int tempRoll;
    char tempName[50];
    float tempMarks;

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->rollNo > j->rollNo) {
                tempRoll = i->rollNo;
                i->rollNo = j->rollNo;
                j->rollNo = tempRoll;

                strcpy(tempName, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, tempName);

                tempMarks = i->marks;
                i->marks = j->marks;
                j->marks = tempMarks;
            }
        }
    }

    printf("Students sorted according to Roll Number.\n");
}

void searchStudent() {
    int roll;
    struct Student *temp = head;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    while (temp != NULL) {
        if (temp->rollNo == roll) {
            printf("\nStudent Found:\n");
            printf("Roll No: %d\n", temp->rollNo);
            printf("Name: %s\n", temp->name);
            printf("Marks: %.2f\n", temp->marks);
            return;
        }
        temp = temp->next;
    }

    printf("Student not found.\n");
}

void updateMarks() {
    int roll;
    float newMarks;
    struct Student *temp = head;

    printf("Enter Roll Number to update marks: ");
    scanf("%d", &roll);

    while (temp != NULL) {
        if (temp->rollNo == roll) {
            printf("Enter New Marks: ");
            scanf("%f", &newMarks);
            temp->marks = newMarks;
            printf("Marks updated successfully.\n");
            return;
        }
        temp = temp->next;
    }

    printf("Student not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Student Linked List Menu ---\n");
        printf("1. Insert Student Information\n");
        printf("2. Display Student Information\n");
        printf("3. Sort by Roll Number\n");
        printf("4. Search by Roll Number\n");
        printf("5. Update Marks\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                sortByRollNumber();
                break;

            case 4:
                searchStudent();
                break;

            case 5:
                updateMarks();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
