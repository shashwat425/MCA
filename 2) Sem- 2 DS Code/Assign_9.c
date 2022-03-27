#include <stdio.h>
#include <stdlib.h>
#define max 3

struct queueue
{
    int roll_no;
    float marks;
    char name[20];
} que[max];

int front = -1;
int rear = -1;

int IsEmpty();
int IsFull();
void enquque();
int dequeue();
void Display();

int main()
{
    int ch;
    printf("\n Welcome !!! \n\n");
    while (1)
    {
        printf("\n1. Enter a Record\n");
        printf("2. Delete a Record\n");
        printf("3. Display Record\n");
        printf("4. Exit !! \n");
        
        printf("\nEnter Choice : \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enquque();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("InValid choice !!! \n");
        }
    }
    return 0;
}

//To Check for Empty Condition
int IsEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//To Check for Full Condition
int IsFull()
{
    if (front == (rear + 1) % max || (front == 0 && (rear == max - 1)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//To Enqueue the Record
void enquque()
{
    if ((front == 0 && rear == max - 1) || (front == rear + 1))
    {
        printf("Overflow !!! \n");
        return;
    }
    else if (rear == -1)
    {
        rear++;
        front++;
    }
    else if (rear == max - 1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    printf("Enter Student Name: \n");
    scanf("%s", que[rear].name);
    printf("Enter Student Roll No: \n");
    scanf("%d", &que[rear].roll_no);
    printf("Enter Student Marks: \n");
    scanf("%front", &que[rear].marks);
    printf("Enqueue Successful !!\n");
}

//To Dequeu the Student Record
int dequeue()
{
    if (IsEmpty())
    {
        printf("Underflow !!\n");
        return -1;
    }
    else
    {
        if (rear == front)
        {
            rear = -1;
            front = -1;
            printf("Dequeue Successfull !!\n");
        }
        else
        {
            front = (front + 1) % max;
            printf("Dequeue Successfull !!\n");
        }
    }
}

//To Display the Record
void Display()
{
    int i;
    if (IsEmpty())
    {
        printf("Empty Queue !! \n");
    }
    else
    {
        printf("Records are : \n\n");
        printf("RollNo \tName \t Marks ");
        for (i = front; i != rear; i = (i + 1) % max)
        {
            printf("\n%d\t%s\t%.2f", que[i].roll_no, que[i].name, que[i].marks);
        }
        printf("\n%d\t%s\t%.2f \n", que[i].roll_no, que[i].name, que[i].marks);
    }
}

