#include <stdio.h>
#include <string.h>

struct Address
{
    int pincode;
};

struct Student
{
    int age;
    char name[50];
    int rollno;
    struct Address s2;
};

int main()
{
    struct Student s1[3];

    printf("Student...!\n");
    for(int i=0;i<3;i++)
    {
        // scanf("%s",s1[i].name);
        // printf(" %s",s1[i].name);
        printf("\nEntre Name : ");
        scanf(" %s", s1[i].name);
        printf("\nName = %s ", s1[i].name);

        printf("\nEnter Age :");
        scanf(" %d", &s1[i].age);
        printf("\nAge = %d ", s1[i].age);


        scanf(" %d", s1[i].rollno);
        printf("\nEntre Roll No = %d",s1[i].rollno);

        scanf(" %d", s1[i].s2.pincode);
        printf("\nEnter Pin code = %d ",s1[i].s2.pincode);
    }
}