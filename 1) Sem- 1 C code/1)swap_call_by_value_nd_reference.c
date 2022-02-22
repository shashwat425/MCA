//swap call by value and call by reference

#include<stdio.h>
void swap_by_value(int a, int b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	
	printf("\nValue of A and B in function :\n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);
}

void swap_by_reference(int *a, int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("\nValue of A and B in function :\n");
	printf("A = %d \n", *a);
	printf("B = %d \n", *b);
}

int main()
{
	int a,b,temp=0;
	printf("Enter value of A and B :");
	scanf(" %d %d", &a ,&b);
	
	printf("\nBy Value ----> ");
	printf("\nBefore Swapping :\n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);

    swap_by_value(a,b);

	printf("\nAfter Swapping :\n");
	printf("A = %d \n",a);
	printf("B = %d \n\n",b);
	
	printf("\nBy Reference ----> ");
	printf("\nBefore Swapping :\n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);

    swap_by_reference(&a, &b);

	printf("\nAfter Swapping :\n");
	printf("A = %d \n",a);
	printf("B = %d \n",b);
}
