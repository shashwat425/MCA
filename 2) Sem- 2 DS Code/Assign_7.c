#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
#include <math.h>

char *kpop();
char postfix[MAX];
char stac[MAX][MAX];
void ppush(char *str);
int isempty();
int white_space(char symbol);
void postfix_to_prefix();
int top = -1;
char str[MAX], stack[MAX], a[20], b[20], B[20], A[20], c[50];
int checkIfOperand(char);
void push1(char);
char pop1();
void infixtopostfix(char[]);
void infixtoprefix(char[]);
void postfixtoinfix(char[]);
void prefixtoinfix(char[]);
int operand(char);
int isop(char);
int oper(char);
int isOperator(char);
int oper1(char);
void push(char);
int prec(char);
char pop();

int main()
{
    int choice;
    printf("\n1 Infix expression to Postfix expression\n");
    printf("2 Infix expression to Prefix expression\n");
    printf("3 Postfix expression to Infix expression\n");
    printf("4 Prefix expression to Infix expression\n");
    printf("5 Postfix expression to Prefix expression\n");
    printf("6 Prefix expression to Postfix expression\n");
    printf("7 EXIT \n");
    while (1)
    {
        printf("\n Enter the choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            printf("Enter the infix expression : ");
            scanf("%s", a);
            infixtopostfix(a);
            break;
        case 2:

            printf("Enter the infix expression : ");
            scanf("%s", A);
            strrev(A);
            infixtoprefix(A);
            break;
        case 3:

            printf("Enter the postfix expression : ");
            scanf("%s", a);
            postfixtoinfix(a);
            break;
        case 4:

            printf("Enter the prefix expression : ");
            scanf("%s", a);
            prefixtoinfix(a);
            break;
        case 5:

            printf("Enter postfix expression : ");
            scanf("%s", postfix);
            postfix_to_prefix();
            break;
        case 6:
            printf("Enter prefix expression : ");
            scanf("%s", postfix);
            strrev(postfix);
            prefixtopostfix();
            break;
        case 7:
            exit(0);
            break;
        case 8:
        default:
            printf("\n Enter the correct choice \n");
            break;
        }
    }
    return 0;
}


void infixtopostfix(char p[])
{
    int i = 0, j = 0;
    char x;
    while (p[i] != '\0')
    {
        if (operand(p[i]))
        {
            printf("%c", p[i++]);
        }
        else
        {
            if (p[i] == '(')
            {
                push(p[i++]);
            }
            else if (p[i] == ')')
            {
                while ((x = pop()) && x != '(')
                {
                    printf("%c", x);
                }
                i++;
            }
            else
            {
                while (prec(c[top]) >= prec(p[i]))
                {
                    printf("%c", pop());
                }
                push(p[i++]);
            }
        }
    }
    while (top >= 0)
    {
        printf("%c", pop());
    }
}
int operand(char k)
{
    if (k == '+' || k == '-' || k == '*' || k == '/' || k == '^' || k == '(' || k == ')')
        return 0;
    else
        return 1;
}
void infixtoprefix(char p[])
{
    int i = 0, j = 0;
    char x;
    while (p[i] != '\0')
    {
        if (isop(p[i]))
        {
            B[j++] = p[i++];
        }
        else
        {
            if (p[i] == ')')
            {
                push(p[i++]);
            }
            else if (p[i] == '(')
            {
                while ((x = pop()) && x != ')')
                {
                    B[j++] = x;
                }
                i++;
            }
            else
            {
                while (prec(c[top]) > prec(p[i]))
                {
                    B[j++] = pop();
                }
                push(p[i++]);
            }
        }
    }
    while (top >= 0)
    {
        B[j++] = pop();
    }
    strrev(B);
    printf("%s", B);
}

int isop(char k)
{
    if (k == '+' || k == '-' || k == '*' || k == '/' || k == '^' || k == '(' || k == ')')
        return 0;
    else
        return 1;
}
void postfixtoinfix(char p[])
{
    char k[30];
    int i, l, j = 0;
    strrev(p);
    l = strlen(p);
    for (i = 0; i < l; i++)
    {
        if (oper(p[i]))
        {
            push(p[i]);
        }
        else
        {
            k[j++] = p[i];
            k[j++] = pop();
        }
    }
    k[j] = p[top--];
    strrev(k);
    puts(k);
}
int oper(char k)
{
    if (k == '+' || k == '-' || k == '*' || k == '/' || k == '^')
        return 1;
    else
        return 0;
}
void prefixtoinfix(char p[])
{
    char k[30];
    int i, l, j = 0;
    l = strlen(p);
    for (i = 0; i < l; i++)
    {
        if (oper1(p[i]))
        {
            push(p[i]);
        }
        else
        {
            k[j++] = p[i];
            k[j++] = pop();
        }
    }
    k[j] = p[top--];
    puts(k);
}
int oper1(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return 1;
    else
        return 0;
}

void push(char p)
{
    c[++top] = p;
}

char pop()
{
    return c[top--];
}
int prec(char a)
{
    if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

void postfix_to_prefix()
{
    top = -1;
    unsigned int i;
    char operand1[MAX], operand2[MAX];
    char symbol;
    char temp[2];
    char strin[MAX];
    for (i = 0; i < strlen(postfix); i++)
    {
        symbol = postfix[i];
        temp[0] = symbol;
        temp[1] = '\0';

        if (!white_space(symbol))
        {
            switch (symbol)
            {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
            case '^':
                strcpy(operand1, kpop());
                strcpy(operand2, kpop());
                strcpy(strin, temp);
                strcat(strin, operand2);
                strcat(strin, operand1);
                ppush(strin);
                break;
            default:
                ppush(temp);
            }
        }
    }
    printf("\nPrefix Expression :: ");
    puts(stac[0]);
}

void ppush(char *str)
{
    if (top > MAX)
    {
        printf("\nStack overflow\n");
        exit(1);
    }
    else
    {
        top = top + 1;
        strcpy(stac[top], str);
    }
}

char *kpop()
{
    if (top == -1)
    {
        printf("\nStack underflow \n");
        exit(2);
    }
    else
        return (stac[top--]);
}
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int white_space(char symbol)
{
    if (symbol == ' ' || symbol == '\t' || symbol == '\0')
        return 1;
    else
        return 0;
}

prefixtopostfix()
{
    top = -1;
    unsigned int i;
    char operand1[MAX], operand2[MAX];
    char symbol;
    char temp[2];
    char strin[MAX];
    for (i = 0; i < strlen(postfix); i++)
    {
        symbol = postfix[i];
        temp[0] = symbol;
        temp[1] = '\0';

        if (!white_space(symbol))
        {
            switch (symbol)
            {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
            case '^':
                strcpy(operand1, kpop());
                strcpy(operand2, kpop());
                strcpy(strin, temp);
                strcat(strin, operand2);
                strcat(strin, operand1);
                ppush(strin);
                break;
            default:
                ppush(temp);
            }
        }
    }
    printf("\nPostfix Expression :: ");
    strrev(stac);
    puts(stac[0]);
}
