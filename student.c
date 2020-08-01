#include <stdio.h>
struct student {
    char Name[50];
    int roll;
    int marks;
    char address[100];
    int age;

} s[4];

int main() {
    int i;
    printf("Enter list of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s",&s[i].Name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
        printf("Enter address: ");
        scanf("%s",&s[i].address);
        printf("Enter Age: ");
        scanf("%d",&s[i].age);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("Name: %s\n",s[i].Name);
        printf("Marks: %d\n", s[i].marks);
        printf("Address: %s\n",s[i].address);
        printf("Age %d\n",s[i].age);
        printf("\n");
    }
    return 0;
}