#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct student
{
	int roll;
	char name [30];
	int marks;
};
struct  student S[MAX];

int top=-1;

int isfull()
{
	if(top == MAX-1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int isempty()
{
	if(top==-1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}


void push()
{
	int x;
	if(isfull()==1)
	{
		printf("\n Stack is full  ----> OVERFLOW !!!\n");
	}
	else
	{
		top=top+1;
		printf("\nEnter Roll No : ");
		scanf("%d", &S[top].roll);
		printf("Enter Name : ");
		scanf("%s", S[top].name);
		printf("Enter Marks : ");
		scanf("%d", &S[top].marks);
	}
}

void pop()
{
	if(isempty()==1)
	{
		printf("\n Stack is Empty ----> UNDERFLOW !!!\n");
	}
	else
	{		
		printf("\n Roll No : %d \n Name : %s \n Marks : %d \n", S[top].roll,S[top].name,S[top].marks);
		printf("\nPopped !! \n");
		top=top-1;
	}
}

void display()
{
	int i;
	if(isempty()==1)
	{
		printf("\n Stack is Empty !!!\n");
	}
	else
	{
		printf("\nElements of stack are as follows : \n");
		for(i=top;i>=0;i--)
		{	
			printf("\n Roll No : %d \n Name : %s \n Marks : %d \n",S[i].roll,S[i].name,S[i].marks);
		}
	}
}


void size()
{
 	printf("Size is : %d \n", top );		
} 

int main()
{
  char ch;
  int v=1;

  while(v)
  {
  	printf("\n\n******** MENU LIST ********");
	printf("\nEnter A to PUSH");
	printf("\nEnter B to POP");
	printf("\nEnter C to DISPLAY");
	printf("\nEnter D to EXIT");
	printf("\n\nEnter your choice : \n");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A': push();
				  break;
		case 'B': pop();
			       break;
		case 'C': display();
				  break;
		case 'D': v=0; 
				  printf("\n Exit !! \n");
			      break;
		default:  printf("\n Invalid choice !! \n");
	}
	fflush(stdin);
  }
  return 0;
}






