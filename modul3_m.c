#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter string:\n");
    gets(str1);

    strcpy(str2,str1);

    printf("copied string is:  %s",str2);
     return 0;
}
