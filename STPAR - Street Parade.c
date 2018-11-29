#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int capacity;
    int* array;
    int top;
};
struct stack* createStack(int capacity)
{
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->capacity = capacity;
    s->top = -1;
    s->array = (int*)malloc(sizeof(int)*s->capacity);
    return s;
};
int isEmpty(struct stack* s)
{
    return s->top==-1;
}
int peek(struct stack* s)
{
    return s->array[s->top];
}
void push(struct stack* s, int data)
{
    if(s->top==(s->capacity-1))
        printf("Stack is full");
    else
    {
        s->top++;
        s->array[s->top] = data;
    }
}
void pop(struct stack* s)
{
    if(s->top==-1)
        printf("empty");
    else
        s->array[s->top--];
}
void parade(int n)
{
    struct stack* side = createStack(n);
    int a[n], total = 1, state=1;
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<n; i++)
    {
        while(!isEmpty(side) && side->array[side->top] == total)
        {
            total++;
            pop(side);
        }
        if(a[i]==total)
            total++;
        else if(!isEmpty(side) && side->array[side->top]<a[i])
        {
            state = 0;
            break;
        }
        else
            push(side, a[i]);
    }
    if(state==1)
        printf("yes\n");
    else if(state==0)
        printf("no\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        parade(n);
        scanf("%d", &n);
    }
    return 0;
}
