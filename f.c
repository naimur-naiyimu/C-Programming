#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,l;
    char ch[1000000];
    scanf("%s",&ch);
    l=strlen(ch);
    for (int i = 0; i < l; i++)
    {
        if(ch[i]=='4' || ch[i]=='7')
        {
            c++;
        }
    }
    if(c==7 || c==4)
    {
        printf("YES\n");
    }
    else 
        printf("NO\n");
   
    
}