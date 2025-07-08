#include <stdio.h>
#define max_students 100

void inputStudentInfo();
void displayStudentInfo();
void averageMarksOfStudent();
void displayTopper();
void totalFailedStudents();
void failedStudentsInfo();

struct dateOfBirth {
    int day, month, year;
};

struct studentInfo {
    int id, mark;
    char name[50];
    struct dateOfBirth dob;
};

//main
int main (){
    int n;
    struct studentInfo students[max_students];
    printf("Enter students number:\n");
    scanf("%d", &n);

    if(n<=0){
        printf("Student number needs to be more than ZERO!\n");
        return;
    }

    inputStudentInfo(students, n);
    displayStudentInfo(students, n);
    averageMarksOfStudent(students, n);
    displayTopper(students, n);
    totalFailedStudents(students, n);
    failedStudentsInfo(students, n);

    return 0;
}

void inputStudentInfo(struct studentInfo students[], int n){
    printf("\nEnter student info\n");

    for (int i=0; i<n; i++){
        printf("Enter id: \n");
        scanf("%d", &students[i].id);

        printf("Enter name: \n");
        scanf("%s", &students[i].name);

        printf("Enter mark: \n");
        scanf("%d", &students[i].mark);

        printf("Enter Date of Birth Day/Month/Year: \n");
        scanf("%d", &students[i].dob.day);
        scanf("%d", &students[i].dob.month);
        scanf("%d", &students[i].dob.year);

        printf("\n");
    }
}

void displayStudentInfo(struct studentInfo students[], int n){
    printf("All students info\n");
    //printf("\n%-2s %-6s %-6s %-s\n", "ID", "Name", "Mark", "DOB");

    for (int i=0; i<n; i++){
        printf("%d. ", students[i].id);
        printf("Name: %s  ", students[i].name);
        printf("Mark: %d  ", students[i].mark);
        printf("Date of Birth: %d/%d/%d ", students[i].dob.day, students[i].dob.month, students[i].dob.year);
        printf("\n");
    }
}

void averageMarksOfStudent(struct studentInfo students[], int n){
    float totalMark=0;
    float averageMark;

    for (int i=0; i<n; i++){
        totalMark += students[i].mark;
    }

    averageMark = totalMark/n;
    printf("\nAverage marks: %.2f\n", averageMark);
}

void displayTopper(struct studentInfo students[], int n){
    int topperId = 0;

    for (int i=0; i<n; i++){
        if(students[i].mark > students[topperId].mark){
            topperId = students[i].id;
        }
    }
    printf("Topper id %d, Name: %s, Mark: %d\n", students[topperId].id, students[topperId].name, students[topperId].mark);
}


void totalFailedStudents(struct studentInfo students[], int n){
    int failedStudents=0;

    for (int i=0; i<n; i++){
        if(students[i].mark<55){
            failedStudents++;
        }
    }
    printf("Total failed students: %d\n", failedStudents);
}

void failedStudentsInfo(struct studentInfo students[], int n){
    int failedStudent = 0;

    printf("Failed students info:\n");
    for (int i=0; i<n; i++){
        if(students[i].mark <55){
            printf("Id %d, Name: %s, Mark: %d\n", students[i].id, students[i].name, students[i].mark);
            failedStudent++;
        }
    }
    if(!failedStudent){
        printf("No failed students to show!\n");
    }
}
