//Sum of first and last digit

#include <stdio.h>
#include<math.h>
int main()
{
    int n,temp,c=0,mid=0,first=0,last=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
	last=n%10;
    temp=n; 
    
	while(temp!=0)
    {
    	temp=temp/10;
    	c++;
	}
	
	temp=n; 
	first=temp/pow(10,c-1);
	
    printf("First digit = %d \n", first );
    printf("Last digit = %d \n", last );
    
	printf("Sum of first and last digit = %d \n", first+last );	
	return 0;
	
}
