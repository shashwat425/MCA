#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct Node
{
    int data;
    struct Node *next;
};


void creation (struct Node** head,int data)
{
      struct Node* node = (struct Node*)malloc(sizeof(struct Node));
      struct Node* last = *head;
    
    if(*head==NULL)
    {
        node->data=data;
        node->next=NULL;
        *head=node;
    }
    else
    {
        while(last->next!=NULL)
        {
            if(last->next->data < data)
            {
                last=last->next;
            }
            else
            {
                break;
            }
        }
        
        if(last->data < data)
        {
            node->data=data;
            node->next=last->next;
            last->next=node;
        }
        else
        {
            node->data=data;
            node->next=*head;
            *head=node;    
        } 
    }
}


void deleteNode(struct Node** head, int key)
{    
    struct Node* temp = *head;
	struct Node* prev = *head; 
 
    if (temp != NULL && temp->data == key)
	 {
        *head = temp->next; 
        free(temp); 
        return;
     }

    while (temp != NULL && temp->data != key) 
	{
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL)
        return;
 
    prev->next = temp->next;
    free(temp); 
}


void show (struct Node** temp)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node*));
    new_node = *temp;
    while(new_node!=NULL)
    {
        printf(" %d",new_node->data);
        new_node = new_node->next;
    }
    printf("\n");
}

int search (struct Node** head, int x)
{
    struct Node* current = *head;  
    while (current != NULL)
    {
        if (current->data == x)
            return 1;
        current = current->next;
    }
    return 0;
}


int main( )
{    
    int n, number=0;
    int i,num;
    struct Node* head = NULL;
    
    srand(time(0));
    
    printf(" Enter the size : ");
    scanf("%d",&n);

    if(n==0)
    {
      	printf(" Linked List is Empty");
      	return 1;
	}
    
    for(i=0;i<n;i++)
    {
	number=(rand() % (100-1 + 1)) + 1;
        creation(&head, number);
    }
    
    printf("\n Linked List : \n");
    show(&head);
    printf("\n Random No Generated : ");
    num = rand()%100;
    printf("%d \n", num);

    int status=search(&head,num);
    if(status)
    {
    	printf(" Element Found");
    	printf("\n Linked List after deleting the element : \n");
    	deleteNode(&head, num);
		show(&head);
	}
	else
	{
		printf(" Element Not Found !!! ");
		printf("\n\n Linked List after inserting the new element : \n");
		creation(&head, num);
		show(&head);	
	}	
}

