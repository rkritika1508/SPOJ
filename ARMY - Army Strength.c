#include<stdio.h>
int max(int a[], int n)
{
    int num=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>num)
            num = a[i];
    }
    return num;
}
void army()
{
    int ng, nm;
    scanf("%d%d", &ng, &nm);
    int godz[ng], mech[nm];
    for(int j=0; j<ng; j++)
        scanf("%d", &godz[j]);
    for(int j=0; j<nm; j++)
        scanf("%d", &mech[j]);
    if(max(godz, ng)>=max(mech, nm))
        printf("Godzilla\n");
    else
        printf("MechaGodzilla\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
        army();
    return 0;
}
