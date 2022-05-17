#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char c[101];
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s",c);
        int l=strlen(c);
        printf("%c",c[0]);
        for(int i=1;i<l;i+=2)
        {
            printf("%c",c[i]);
        }
        printf("\n");
    } 
    return 0;
    
}