#include<stdio.h>
int partition(int [*], int, int);
void quickSort(int a[], int start, int end)
{
    int pIndex;
    if(start<end)
    {
        pIndex = partition(a, start, end);
        quickSort(a, start, pIndex-1);
        quickSort(a, pIndex+1, end);
    }
}
int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int pIndex = start;
    int temp;
    for(int i=start; i<end; i++)
    {
        if(a[i]<=pivot)
        {
            temp = a[i];
            a[i] = a[pIndex];
            a[pIndex] = temp;
            pIndex++;
        }
    }
    temp = a[pIndex];
    a[pIndex] = a[end];
    a[end] = temp;
    return pIndex;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int req, sum=0;
        int friends, num=0;
        scanf("%d %d", &req, &friends);
        int a[friends];
        for(int j=0; j<friends; j++)
            scanf("%d", &a[j]);
        quickSort(a, 0, friends);
        if(sum>=req)
            return 0;
        for(int j=friends-1; j>=0; j--)
        {
            sum += a[j];
            num++;
            if(sum>=req)
                break;
        }
        printf("Scenario #%d:\n", i);
        if(sum>=req)
            printf("%d\n", num);
        if(sum<req)
            printf("impossible\n");
        printf("\n");
    }
    return 0;
}
