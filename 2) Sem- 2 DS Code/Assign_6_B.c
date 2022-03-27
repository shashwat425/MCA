#include<string.h>
#include<stdio.h>
void push(char);
int operand(char);
int prec(char);
char pop();

int top=-1;
char A[50],c[50],B[50];

void postfix(char p[])
{
    int i=0,j=0;
    char x;
    while(p[i]!='\0')
    {
        if(operand(p[i]))
        {
           B[j++]=p[i++];
        }
        else
        {
               if(p[i]==')')
               {
                   push(p[i++]);
               }
               else if(p[i]=='(')
               {
                   while((x=pop())&&x!=')')
                   {
                     B[j++]=x;
                   }
                   i++;
               }
               else
               {
                   while(prec(c[top])>prec(p[i]))
                    {
                        B[j++]=pop();
                    }
                   push(p[i++]);
               }
        }
    }
    while(top>=0)
    {
       B[j++]=pop();
    }
    strrev(B);
    printf("%s",B);
}

int operand(char k)
{
    if(k=='+'||k=='-'||k=='*'||k=='/'||k=='^'||k=='('||k==')')
        return 0;
    else
        return 1;
}
int prec(char x)
{
    if(x=='+'||x=='-')
    return 1;

    else if(x=='*'||x=='/')
    return 2;

    else if(x=='^')
    return 3;

    return 0;
}

void push(char p)
{
  c[++top]=p;
}

char pop()
{
    if(top==-1)
        printf("stack overflow");
    else
        return c[top--];
}


int main()
{
    printf("Enter the Expression :  ");
    gets(A);
    strrev(A);
    postfix(&A);
    return 0;
}
