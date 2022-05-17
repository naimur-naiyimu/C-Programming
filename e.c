#include<stdio.h>
#include<string.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    if (n<26)
    {
        printf("NO\n");
    }
    else
    {
        for (int  i = 0; i < 26; i++)
        {
            int c=97+i;
            int C=65+i;
            f=0;
            for (int  i = 0; i <= n; i++)
            {
               int a=ch[i];
               if(a==c || a==C) 
               {
                   f++;
               }
            }
            if(f==0)
            {
                printf("NO\n");
                return 0;
            }     
             
        }
        printf("YES\n"); 
    }
}