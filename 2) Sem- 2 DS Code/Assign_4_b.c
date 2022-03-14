#include <stdio.h>
#include <stdlib.h>

struct student
{
  int roll;
  char name[30];
  float marks;
  struct student *next;
}*head = NULL;

struct student *top = NULL;
int num,count = 0;

//Function To Check for Overflow Condition
int isFull()
{
  if (num == count)
  {
    return 1;
  }
  return 0;
}

//Function To PUSH Element
int push()
{
  struct student *temp, *p;
  
  if(isFull() == 1)
  {
    printf("\n ****** STACK IS OVERFLOW !! ******\n");
    return 0;
  }
  
  temp = (struct student *)malloc(sizeof(struct student)); 
  printf("\n Enter Roll No : ");
  scanf("%d", &temp->roll);
  printf(" Enter Name : ");
  scanf("%s", &temp->name);
  printf(" Enter Marks : ");
  scanf("%f", &temp->marks);
  
  if(head == NULL)
  {
    head = temp;
    head->next = NULL;
    top = head;
    count++;
  }
  else
  {
    temp->next = NULL;
    top->next = temp;
    top = temp;
    count++;
  }
}

//Function To Check for Underflow Condition
int IsEmptyStack()
{
  if (head == NULL)
  {
    return 1;
  }
  return 0;
}

//Function To POP Element
int pop()
{
  struct student *p = head;
  int i = 1;
  if (IsEmptyStack() == 1)
  {
    printf("\n ****** STACK UNDERFLOW !! ******\n");
    return 0;
  }
  printf("\n ****** Popped Record ****** ");
  printf("\n RollNo : %d\n Name : %s\n Marks : %.2f\n ", top->roll, top->name, top->marks);
  if (top == head)
  {
    free(top);
    top = NULL;
    head = NULL;
    count--;
  }

  while (i <= count)
  {
    if (p->next == top)
    {
      free(top);
      top = p;
      top->next = NULL;
    }
    i++;
  }
  count--;
}

//Function To Display Record
int display()
{
  if (IsEmptyStack() == 1)
  {
    printf("\n ****** Empty !! ****** \n");
    return 1;
  }
  
    printf("\n -------------------------------");
    printf("\n ****** Student Records ****** \n");
    printf(" -------------------------------");
    printf("\n RollNo\t Name \t  Marks\n");
    struct student *p = head;
    while (p != NULL)
    {
      printf("\n %d \t %s \t  %.2f\n", p->roll, p->name, p->marks);
      p = p->next;
    }
  return 0;
}

int Size()
{
  return (count);
}


int main()
{
  char ch;

  printf(" Enter Stack count: ");
  scanf("%u", &num);
  int v = 1;
  while (v)
  {
    printf("\n\n ******** MENU LIST ********");
    printf("\n A.Push a student record");
    printf("\n B.Pop a student record");
    printf("\n C.Display all student records");
    printf("\n D.Exit\n");
    printf("\n Enter Your Choice : ");
    getc(stdin);
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
      printf("\n ****** Push Operation ****** \n");
      push();
      break;

    case 'B':
      pop();
      break;

    case 'C':
      display();
      break;

    case 'D':
      printf("\n ****** Exit !! ****** \n");
      v = 0;
      break;

    default:
      printf("\n Incorrect Choice  !!!! \n");
    }
  }
  return 0;
}
