#include<stdio.h>
int main()
{
    int n = 10;
    int a[10]={1,2,3,4,5,6,7,8,9,10}; 
    int b[10]={10,9,8,7,6,5,4,3,2,1};
    
    for (int i=0; i<n; i++) 
    {
        int t=a[i];
        a[i]=b[i];
        b[i]=t;
    }
    for (int i = 0; i < n; i++)
    {
        printf("a is :%d b is:%d\n",a[i],b[i]);
    }
    
}