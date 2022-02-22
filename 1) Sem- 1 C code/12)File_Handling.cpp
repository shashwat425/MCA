#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char name[50];
    int rollno;
    int percentage;
}student;

int main()
{
    struct student s1;
    int n;
    FILE *fp;
    printf("Enter no. of student you want to enter: ");
    scanf("%d",&n);
    while (n--)
    {
        printf("\nEnter Name of Student : ");
        fflush(stdin);
        scanf("%s",s1.name);
        printf("Enter Roll No : ");
        scanf("%d",&s1.rollno);
        printf("Enter Percentage : ");
        scanf("%d",&s1.percentage);
        fp=fopen("student_data.txt","a");
        fwrite(&s1,sizeof(student),1,fp);
        fclose(fp);
    }
    fp=fopen("student_data.txt","r");
    struct student s2;
    printf("\nFile Information:");
    printf("\nName\tRollno\tPercentage\n");
    while (fread(&s2,sizeof(student),1,fp))
    {
        printf("%s\t%d\t%d\n",s2.name,s2.rollno,s2.percentage);
    }
    fclose(fp);
}
