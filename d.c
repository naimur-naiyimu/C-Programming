#include<stdio.h>
int main()
{
    char ch[1000];
    gets(ch);

    int a;
    a=ch[0];
    if(a>=97)
        ch[0]-=32;
    printf("%s\n",ch);
 
}