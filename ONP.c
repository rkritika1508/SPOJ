#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int* array;
    unsigned capacity;
    int top;
};
struct stack* createStack( unsigned capacity )
{
    struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
    if(!stack)
        return NULL;
    stack->top=-1;
    stack->capacity=capacity;
    stack->array = (int*)malloc(stack->capacity*sizeof(int));
    if(!stack->array)
        return NULL;
    return stack;
}
int isempty(struct stack* s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}
char peek(struct stack *st)
{
    return st->array[st->top];
}
char pop(struct stack *st)
{
    if(!isempty(st))
        return st->array[st->top--];
    return '$';
}
void push(char data, struct stack *stack)
{
    stack->top++;
    stack->array[stack->top]=data;
}
int isOperand(char letter)
{
    return (letter>='a' && letter<='z') || (letter>='A' && letter<='Z');
}
int hasHigherPrec(char letter)
{
    switch(letter)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    }
    return -1;
}
int infixtopostfix(char* exp)
{
    struct stack *st = createStack(strlen(exp));
    if(!st)
        return -1;
    int i,k;
    for(i=0,k=-1; exp[i]; i++)
    {
        if(isOperand(exp[i]))
            exp[++k] = exp[i];
        else if(exp[i]=='(')
            push(exp[i], st);
        else if(exp[i]==')')
        {
            while(peek(st)!='(' && !isempty(st))
            {
                exp[++k] = peek(st);
                pop(st);
            }
            pop(st);
        }
        else //is operator
        {
            while(!isempty(st) && hasHigherPrec(exp[i])<=hasHigherPrec(peek(st)))
            {
                exp[++k] = peek(st);
                pop(st);
            }
            push(exp[i], st);
        }
    }
    while(!isempty(st))
    {
        exp[++k] = peek(st);
        pop(st);
    }
    exp[++k]='\0';
    printf("%s\n", exp);
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    char str[402];
    for(int i=0; i<t; i++)
    {
        scanf("%s", str);
        infixtopostfix(str);
    }
    return 0;
}
