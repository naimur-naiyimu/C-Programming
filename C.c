#include<stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,c=0;
    scanf("%d",&n);
    char ch[n];
    ch[0]='0';

    for (int  i = 1; i <= n+1; i++)
    {
        scanf("%c",&ch[i]);
        if(ch[i-1]==ch[i])
        {
            c++;
        }

    }
    printf("%d\n",c);
}