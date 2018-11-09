#include<stdio.h>
#include<string.h>
int main()
{
    int c=5,r;
    char str[200];
    scanf("%d", &c);
    while(c!=0)
    {
        int l=0,i,j;
        scanf("%s", str);
        r = strlen(str)/c;
        char matrix[r][c];
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                matrix[i][j]=str[l];
                l++;
            }
        }
        for(i=1;i<r;i=i+2)
        {
            for(j=0;j<c/2; j++)
            {
                char temp = matrix[i][j];
                matrix[i][j]=matrix[i][c-j-1];
                matrix[i][c-j-1]=temp;
            }
        }
        for(i=0; i<c; i++)
        {
            for(j=0; j<r; j++)
            {
                printf("%c",matrix[j][i]);
            }
        }
        printf("\n");
        scanf("%d", &c);
    }
    return 0;
}
