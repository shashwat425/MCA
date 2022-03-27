#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct check
{
    char name[20];
    int roll;
    char gender[9];
} a[15], b[15];
struct Node
{
    char name[20];
    int roll;
    char gender[9];
    struct Node *next;
} *front = NULL, *rear = NULL;

int i = 0, j = 0;

void enqueue()
{
    struct Node *t;
     t=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter Name : \n");
    scanf("%s", &t->name);
    printf("Enter Roll No : \n");
    scanf("%d", &t->roll);
    printf("Enter Gender : \n");
    scanf("%s", &t->gender);
    
    if (t->gender[0] == 'm' || t->gender[0] == 'M')
    {
        strcpy(a[i].name, t->name);
        a[i].roll = t->roll;
        i++;
    }
    else
    {
        strcpy(b[j].name, t->name);
        b[j].roll = t->roll;
        j++;
    }
    if (t == NULL)
    {
        printf("Queue is FUll\n");
    }
    else
    {
        t->next = NULL;
    }
    if (front == NULL)
    {
        front = rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }
}

void dequeue()
{
    struct Node *t;
    if (front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        t = front;
        front = front->next;
        free(t);
    }
}

void Display()
{
    struct Node *p = front;
    while (p)
    {
        printf("%s ", p->name);
        printf("%d ", p->roll);
        printf("%s ", p->gender);
        printf("\n");
        p = p->next;
    }
    printf("\n");
}


void get_front()
{
	if(front== NULL)
	{
		printf("Empty !!");
	}
	else
	{
		struct Node *p = front;
		printf(" Front Element : \n");
		printf("%s ", p->name);
        printf("%d ", p->roll);
        printf("%s ", p->gender);
        printf("\n");
	}	
}

void Displaymale()
{
    int t;
    for (t = 0; t < i; t++)
    {
        printf("%s ", a[t].name);
        printf("%d ", a[t].roll);
        printf("Male\n");
    }
    printf("\n");
}

void Displayfemale()
{
    int k;
    for (k = 0; k < j; k++)
    {
        printf("%s ", b[k].name);
        printf("%d ", b[k].roll);
        printf("Female\n");
    }
    printf("\n");
}

int main()
{
    int choice;
    printf("1. Enter the student data\n");
    printf("2. Delete the first data\n");
    printf("3. Display the student data\n");
    printf("4. Get Front Record \n");
    printf("5. Display the male record\n");
    printf("6. Display the female record\n");
    printf("7. Exit\n");
    while (1)
    {
        printf("\nenter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            Display();
            break;
        case 4 : 
			get_front();
			break;    
        case 5:
            Displaymale();
            break;
        case 6:
            Displayfemale();
            break;
        case 7:
            return 0;
        }
    }
}









