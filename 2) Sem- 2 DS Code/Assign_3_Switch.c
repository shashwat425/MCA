#include<stdio.h>
#include<stdlib.h>
struct node
{
	int roll;
	char name[30];
	float marks;
	struct node *next;
};
//*head=NULL;

struct node *head;

void insert()
{
	int r;
	char n[30];
	float m;
	
	struct node* temp = (struct node*)malloc(sizeof(struct node));

	printf("\n Enter the Roll No : ");
	scanf("%d", &temp->roll);
	printf(" Enter the name : ");
	scanf("%s" , temp->name);
	printf(" Enter the marks : ");
	scanf("%f", &temp->marks);
	temp->next=NULL;
	
				 
	struct node *curr= head;
	if(curr == NULL)
	{
		head=temp;
	}
	
	else
	{
		while(curr != NULL)
		{
			if(curr->roll == temp->roll)
			{
				printf("\n Roll No: %d is already present \n", temp->roll);
				return;
			}
			curr=curr->next;
		}
		
		curr=head;
		
		while( curr->next != NULL)
		{
			curr=curr->next;
		}
		curr->next=temp;
		temp->next = NULL;	
	}
		printf("\n!!!! Data Inserted !!!! \n");
		
}


void deletion(int roll)
{
	struct node *prev=head;
	struct node *last=head;
	while(last->roll != roll)
	{
		prev=last;
		last=last->next;
		if(last == NULL)
	    {
		  printf("\n !!!! Roll No (%d) to be Deleted not present !!!! \n",roll);
          return;
	    }
	}

	if(prev==last)
    {
        last = last->next;
        head = last;
        free(prev);
        prev = head;
        printf("\n !!!! Data Deleted !!!! \n");
        return;
    }
	prev->next=last->next;
	free(last);
	printf("\n !!!! Data Deleted !!!! \n");
}


void update( )
{
	int ch;
	int roll;
	char name[30];
	float marks;
	
	struct node *temp=head;
	
	printf("\n Enter Roll No to Update : ");
	scanf("%d", &roll);
	
	while(temp->roll != roll)
	{
		temp=temp->next;
		if(temp == NULL)
	    {
		  printf("\n !!!! Roll No (%d) to be Updated not present !!!! \n",roll);
          return;
	    }
	}
	
	printf("\n Enter 1 to Update Name " );
	printf("\n Enter 2 to Update Marks \n");
    printf("\n Enter Your Choice: ");
    scanf("%d", &ch);
	
	switch(ch)
	{
		case 1 : printf("\n Enter new Name : ");
                 scanf("%s",&name);
                 while(temp->roll != roll)
                 {
                 	temp=temp->next;
				 }
				 strcpy(temp->name,name);
				 break;
			
		case 2 : printf("\n Enter new Marks : ");
                 scanf("%f",&marks);
                 temp=head;
				 while(temp->roll != roll)
                 {
                 	temp=temp->next;
				 }
				 temp->marks=marks;
				 break;
	}
	printf("\n !!!! Data Updated !!!! \n");
}



void display( )
{
	 struct node *temp;
	 temp=head;
	 
	int n, roll;
	printf("\n Enter 1 to Display particular Record " );
	printf("\n Enter 2 to Display all Record \n");
    printf("\n Enter Your Choice: ");
    scanf("%d", &n);
	
	switch(n)
	{
		case 1 : printf("\n Enter Roll no to display Record : ");
                 scanf("%d",&roll);
                 while(temp->roll != roll)
                 {
                 	temp=temp->next;
                 	if(temp == NULL)
                 	{
                 		printf("\n !!!! Roll No (%d) is not present !!!! \n",roll);
				        return;
					}
				 }
				 printf("\n RollNo\t Name \t Marks \n");
				 printf(" %d\t %s \t %.2f \n", temp->roll,temp->name,temp->marks);
				 break;
			
		case 2 : if(temp == NULL)
	 			 {
	 			   printf(" List is Empty !!! \n");
	             }
	             else
	 			 {    
	   				printf("\n RollNo\t Name \t Marks \n");
       				while(temp != NULL)
       				{
         				printf(" %d\t %s \t %.2f \n",temp->roll, temp->name, temp->marks);
         				temp=temp->next;
       				}
    			 }			 
	}
}

	
int main()
{	
	int roll;
	char name[30];
	float marks;
	
	struct Node* head = NULL;
	
	int ch,v=1;
	printf("\n ******** WELCOME !!!! ******** \n");
	while(v==1)
	{
		printf("\n Enter 1 for Insert");
		printf("\n Enter 2 for Deletion");
		printf("\n Enter 3 for Update");
		printf("\n Enter 4 for Display");
		printf("\n Enter 5 for Exit \n");
	
		printf("\n Enter Your choice : ");
		scanf("%d", &ch);
	
		switch(ch)
		{
			case 1 : insert();
					 break;
			case 2 : printf("\n Enter Roll No to be deleted : ");
					 scanf("%d", &roll);
					 deletion(roll);
					 break;
			case 3 : update();
					 break;
			case 4:  display();
					 break;
			case 5 : v=0;
					 printf("\n Exit !!!! ");
					 break;	
			default : printf("\n Enter valid Input !!! \n");
		}
  }
}
