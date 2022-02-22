#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void cali();
void mali();
void main(){
	cali();
	mali();
}

void cali(){
	int *str,c;
	int i,count=0,len,n;
	str=(int *)calloc(n,sizeof(int));
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter the numbers : ");
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
	printf("Enter the number to search : ");
	scanf("%d",&c);
	for(i=0;i<n;i++){
		if (c==str[i]){
		//	printf("%d",str[i]);
			count=count+1;
		}
}
	printf("\n");
	printf("Using calloc :: %d repeats %d times in the entered string ",c,count);
free(str);
printf("\n");
}

void mali(){
	int *str,c;
	int i,count=0,len,n;
	printf("\nEnter n : ");
	scanf("%d",&n);
	str=(int *)malloc(n*sizeof(int));
	printf("Enter the numbers : ");
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
	printf("Enter the number to search :");
	scanf("%d",&c);
	for(i=0;i<n;i++){
		if (c==str[i]){
		//	printf("%d",str[i]);
			count=count+1;
		}
}
	printf("\n");
	printf("Using malloc :: %d repeats %d times in the entered string ",c, count);
free(str);
}
