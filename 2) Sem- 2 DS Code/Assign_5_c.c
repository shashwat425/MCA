#include <stdio.h>
#include <string.h>
#define Max 100

char rev[Max];
int top = -1;

void push(char ch)
{
    top++;
    rev[top] = ch;
}

void pop()
{
    printf("%c", rev[top]);
    top--;
}

int main()
{
    char str[100];
    int i;
    printf(" Enter String : ");
    gets(str);
    
    for(i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }
    
    printf(" Reversed String : ");
    for (i = 0; i<strlen(str); i++)
    {
        pop();
    }
    
    return 0;
}
