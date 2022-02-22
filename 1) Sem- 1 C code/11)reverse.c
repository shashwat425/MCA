//Write a program with the help of % and / operator

#include<stdio.h> 
int main()
{
	int n,r,m;
	printf("Enter the number : ");
    scanf("%d", &n);
    
    while(n!=0)
    {
    m=n%10;
    r=(r*10)+m;
	n=n/10;
    }
	

	printf("Reverse : %d" , r);
    return 0;
}

