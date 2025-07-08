#include <stdio.h>

struct student {
    int id;
    char name[50];
    int standard;
    char address[100];

} stud[3];

int main (){
    //struct student x;
    //x.id=33;
    //printf("name:\n");
    //scanf("%s", &x.name);
    //x.standard= 6;
    //printf("address:\n");
    //scanf("%s", &x.address);

    //printf(" %d %s %d %s \n", x.id, x.name, x.standard, x.address);

    //struct student stud1 = {4, "Amin", 9, "School Road, Railway Area"};
    //printf(" %d %s %d %s \n", stud1.id, stud1.name, stud1.standard, stud1.address);



    for (int i = 0; i< 3; i++){
        printf("Enter student %d details: \n", i+1);

        printf("ID: \n");
        scanf("%d",&stud[i].id);
        printf("Name: \n");
        scanf("%s",&stud[i].name);
        printf("Standard: \n");
        scanf("%d",&stud[i].standard);
        printf("Address: \n");
        scanf("%s",&stud[i].address);
    }

    for (int i = 0; i< 3; i++){
        printf("Student %d details: \n", i+1);

        printf("ID: %d ", stud[i].id);
        printf("Name: %s ", stud[i].name);
        printf("Standard: %d ", stud[i].standard);
        printf("Address: %s ", stud[i].address);
        printf("\n\n");
    }
    return 0;
}
