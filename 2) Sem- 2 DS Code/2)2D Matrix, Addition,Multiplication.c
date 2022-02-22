#include <stdio.h>
int main()
{
   int m,n,p,q,i,j,k;
   printf("Enter rows and columns of A : \n");
   scanf("%d %d", &m, &n);
   printf("Enter rows and columns of B :\n");
   scanf("%d %d", &p, &q);
 
   int A[m][n], B[p][q];
   
   printf("Enter values of A : \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		scanf("%d", &A[i][j]);
	}
   }
   
   printf("Enter values of B : \n");
   for(i=0;i<p;i++)
   {
   	for(j=0;j<q;j++)
   	{
   		scanf("%d", &B[i][j]);
	}
   }
   
   printf("Matrix A : \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		printf("%d ", A[i][j]);
	}
	printf("\n");
   }
   
   printf("Matrix B : \n");
   for(i=0;i<p;i++)
   {
   	for(j=0;j<q;j++)
   	{
   		printf("%d ", B[i][j]);
	}
		printf("\n");
   }
   
   
   if(m==p && n==q)
   {
   	  int sum[m][n];
   	  for(i=0;i<m;i++)
      {
   	    for(j=0;j<n;j++)
   	    {
         sum[i][j]=A[i][j]+B[i][j];  
	    }
      }
   printf("Matrix after addition : \n");
    for(i=0;i<m;i++)
      {
   	    for(j=0;j<n;j++)
   	    {
         printf("%d " ,sum[i][j]);  
	    }
	    printf("\n");
      }
  }
  else{
  	printf("Addition not possible !! \n");
   }
   
  		
    if(n==p)
    {
    	int mult[m][p];
       for(i=0;i<m;i++)
       {
       	for(j=0;j<q;j++)
       	{	   
   	     mult[i][j]=0;
          for (k=0;k<p;k++)
          {
             mult[i][j]+=(A[i][k]*B[k][j]);
          }
        }
      }
      
  printf("Matrix after Multiplication : \n");
    for(i=0;i<m;i++)
      {
   	    for(j=0;j<q;j++)
   	    {
         printf("%d " ,mult[i][j]);  
	    }
	    printf("\n");
      }
  }
  else{
  	printf("Multiplication not possible !! \n");
   }
      
 return 0;  
}
