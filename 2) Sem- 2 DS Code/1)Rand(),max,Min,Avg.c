#include<stdio.h>
int main()
{
	int n,i;
	int max=0,min=0,sum=0;
	float avg;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	int ar[n];
	
	for(i=0;i<n;i++)
	{
	   ar[i]=rand()%10;
	   sum+=ar[i];
		printf("%d \n", ar[i]);
		if(ar[i]>max)
		  max=ar[i];
		if(ar[i]<min)
		   min=ar[i];
	}
	
	
	printf("Max Element : %d \n", max);
	printf("Min Element : %d \n", min);
	printf("Sum : %d \n", sum);
	avg=(float)sum/n;
	printf("Average : %.2f \n", avg);
		
}

