// Compound Interest

#include<stdio.h>
int main()
{
    float p,r,t,ci;
	printf("Enter Principal : ");
	scanf("%f", &p);
	printf("Enter Rate : ");
	scanf("%f", &r);
	printf("Enter Time : ");
	scanf("%f", &t);

    ci=p*pow((1+r/100),t) - p;

	printf("Compound Interest : %.2f" , ci);
    return 0;
}
