#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Student Structure
struct student
{
  char name[50];
  int roll;
  float marks;
};
struct student *stack;

int n;
int no_of_copy=0;
int steps=0;
int elements_count=0;
int top=-1;


int isfull()
{
    if(top >= n-1)
        return 1;                   
    else
        return 0;
}

void push()
{
	struct student *temp;
	int i;
	if(isfull()==1)
	{
		printf("\n Stack is full !!!\n");
		printf("\n Doubling the Size ..... !!!\n");
			
		struct student *temp;
		temp=(struct student *)malloc((n)*sizeof(struct student));
		for (i = 0; i <= top; i++)
        {
            strcpy(temp[i].name, stack[i].name);
            temp[i].roll = stack[i].roll;
            temp[i].marks = stack[i].marks;
        }
        no_of_copy++;
        n=n*2;
		
		printf("\n Copying elements ...\n");
		stack = (struct student *)malloc((n)*sizeof(struct student));
		for (i = 0; i < n-1; i++)
        {
            strcpy(stack[i].name, temp[i].name);
            stack[i].roll = temp[i].roll;
            stack[i].marks = temp[i].marks;
        }
        no_of_copy++;
        
		top++;
        printf("\n Enter Roll No : ");
  		scanf("%d", &stack[top].roll);
  		printf(" Enter Name : ");
  		scanf("%s", stack[top].name);
  		printf(" Enter Marks : ");
  		scanf("%f", &stack[top].marks);
  		
  		printf("\n Pushed Successfully !!!\n");

        free(temp);
		
	}
	else
	{
		top++;
		printf("\n Enter Roll No : ");
  		scanf("%d", &stack[top].roll);
  		printf(" Enter Name : ");
  		scanf("%s", stack[top].name);
  		printf(" Enter Marks : ");
  		scanf("%f", &stack[top].marks);
  		
  		printf("\n Pushed Successfull !!!\n");
  		
  		steps=steps+1;
  		
	}
	printf("\n Total Steps : %d", steps);
  	printf("\n Total Copy Operations : %d", no_of_copy);
  	printf("\n Total No of Elements : %d", top+1);
	
}

int isempty()
{
    if(top == -1)
        return 1;               
    else
        return 0;
}


void pop()
{
	int i;
	if(isempty()==1)
	{
		printf("\n Stack is Empty !!!\n");
	}
	else
	{		
		if(top<n)
		{
			printf("\n Popped Record !!!\n");
			printf("\n Roll No : %d", stack[top].roll);
  			printf("\n Name : %s", stack[top].name);
  			printf("\n Marks : %.2f", stack[top].marks);
  			top--;
		}
		else
		{
			printf("\n Popped Record !!!\n");
			printf("\n Roll No : %d", stack[top].roll);
  			printf("\n Name : %s", stack[top].name);
  			printf("\n Marks : %.2f", stack[top].marks);
  			
			top--;
			struct student *temp;
			temp=(struct student *)malloc((top) * sizeof(struct student));
			for (i = 0; i < top; i++)
        	{
            	strcpy(temp[i].name, stack[i].name);
            	temp[i].roll = stack[i].roll;
            	temp[i].marks = stack[i].marks;
        	}
        	no_of_copy++;
		
			stack = (struct student *)malloc((top*2) * sizeof(struct student));
			for (i = 0; i < top; i++)
        	{
            	strcpy(stack[i].name, temp[i].name);
            	stack[i].roll = temp[i].roll;
            	stack[i].marks = temp[i].marks;
        	}
        	no_of_copy++;
        	free(temp);
		}
	}
	steps++;
	printf("\n Total Steps : %d", steps);
  	printf("\n Total Copy Operations : %d", no_of_copy);
  	printf("\n Total No of Elements : %d", top+1);
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
		elements_count=top;
		printf("\nElements of stack are as follows : \n");
		for(i=top;i>=0;i--)
		{	
			printf("\n Roll No : %d", stack[i].roll);
  			printf("\n Name : %s", stack[i].name);
  			printf("\n Marks : %.2f \n", stack[i].marks);
		}
	}
	steps++;
	printf("\n Total Steps : %d", steps);
  	printf("\n Total Copy Operations : %d", no_of_copy);
  	printf("\n Total No of Elements : %d", elements_count);	
}


int main()
{
  
  int v = 1, ch=0;
  printf(" Enter Stack Size : ");
  scanf("%d", &n);
  stack = (struct student *)malloc(n*sizeof(struct student));

  while (v)
  {
    printf("\n\n ******** MENU LIST ********");
    printf("\n 1.Push a Student Record");
    printf("\n 2.Pop a Student Record");
    printf("\n 3.Display all Student Records");
    printf("\n 4.Exit\n");
    printf("\n Enter Your Choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      printf("\n ****** Push Operation ****** \n");
      push();
      break;

    case 2:
      pop();
      break;

    case 3:
      display();
      break;

    case 4:
      printf("\n ****** Exit !! ****** \n");
      v = 0;
      break;

    default:
      printf("\n Incorrect Choice  !!!! \n");
    }
	fflush(stdin);
    
  }
  
}



