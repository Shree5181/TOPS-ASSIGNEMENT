#include<stdio.h>
int main()
{
    int k=1;
    for(int i = 1; i<=5;i++)
    {
        for(int j = 1; j<=k; j++)
        {
            printf("* ");
        }
        k++;
        printf("\n");
    }
       return 0;
}