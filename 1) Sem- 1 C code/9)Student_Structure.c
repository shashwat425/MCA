//Make a student record using structure
//Name,Branch,Roll No,Subjects(5),Age,Address,Semester

#include<stdio.h>
struct student
{
  char name[25];
  int roll,age,sem;
  int eng,maths,csa,c,os;
  char branch[10],subject[10],addr[20];
}
//s[5]
;

int main()
{
	int i,n;
	printf("Enter no of students : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0;i<n;i++)
	{
	  	s[i].roll=i+1;
	  	printf("\nRoll No : %d\n",s[i].roll);
	  	
		printf("Enter Name : ");
	  	scanf("%s", s[i].name);
	  	
		printf("Enter Age : ");
	  	scanf("%d", &s[i].age);
	  
	  	printf("Enter Semester : ");
	  	scanf("%d", &s[i].sem);
	    
	    printf("Enter Marks : \n");
	    printf("English:");
	    scanf("%d", &s[i].eng);
	    printf("CSA:");
	    scanf("%d", &s[i].csa);
	    printf("OS:");
	    scanf("%d", &s[i].os);
	  	printf("Maths:");
	    scanf("%d", &s[i].maths);
	    printf("C:");
	    scanf("%d", &s[i].c);
	    
		printf("Enter Address : ");
	  	scanf("%s", s[i].addr);
	  	
	}
	
	printf("\n..........Student Information ........ \n");
	for(i=0;i<n;i++)
	{
		printf("%Roll No : %d\n", i+1);
		printf("Name : %s\n", s[i].name);
		printf("Age : %d\n", s[i].age);
		printf("Semester : %d\n", s[i].sem);
		
		printf("\nMarks : \n\n");
		printf("English : %d\n", s[i].eng);
		printf("Maths : %d\n", s[i].maths);
		printf("OS : %d\n", s[i].os);
		printf("CSA : %d\n", s[i].csa);
		printf("C : %d\n", s[i].c);
		
		printf("Address : %s\n", s[i].addr);
		printf("\n\n");		
	}
	return 0;
}
