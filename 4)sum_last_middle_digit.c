//Sum of middle and last digit

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
	n=n/pow(10,(c/2));
	mid=n%10;
	
    printf("Mid digit = %d \n", mid );
    printf("Last digit = %d \n", last );
    
    printf("Sum of last and mid digit = %d", last+mid );	
	return 0;
	
}
