#include<stdio.h>
int main()
{
    int n,max=0,sub=0;
    scanf("%d",&n); //input size

    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]); //input data
        if(a[i]>max) max=a[i];

    }    
    for (int  i = 0; i < n; i++)
    {
        sub=sub+(max-a[i]);
    }
    printf("%d\n",sub);
}