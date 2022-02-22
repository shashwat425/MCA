#include<stdio.h>
int main()
{
	int size,i,j,t=0,c=0;
	printf("Enter size:");
	scanf("%d", &size);
	int ar[size];
	
	for(i=0;i<size;i++)
	{
		scanf("%d", &ar[i]);
	}
	
    printf("\nOriginal Array : \n ");
	for(i=0;i<size;i++)
	{
	  printf("%d ", ar[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				t=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=t;
			}
		}
    }
    
    /*
    printf("\nSorted Array : \n");
    for(i=0;i<size;i++)
	{
	  printf("%d ", ar[i]);
	}
    */
    
    printf("\nRepeted Element : \n");
    for(i=0;i<size;i++)
    {
    	if(ar[i]==ar[i+1])
    	{
    	printf("%d \n", ar[i]);
	    }
	}
    
    printf("\nMissing Element : \n");
    for(i=0;i<size-1;i++)
    {
    	if(((ar[i+1]-ar[i]) != 1) && (ar[i+1]-ar[i]) != 0 )
    	{
    	printf("%d \n", (++ar[i]) );
    	i++;
	    }
	}
    
	return 0;
}
