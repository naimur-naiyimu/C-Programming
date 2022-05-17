#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    while (t--)
    {
        int r=a[0];
        for (int i = 0; i < n; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=r;
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    } 
}