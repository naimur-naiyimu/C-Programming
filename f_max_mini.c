#include<stdio.h>
void max(int a[], int count){
    int max=a[0],mini=a[0];
    for (int i = 0; i < count; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(mini>a[i])
        {
            mini=a[i];
        }
    }
    printf("max=%d  mini=%d\n",max,mini);
    
}
int main()
{
    int b[]={5,6,8,6,7,5,8,6,9};
    int c=sizeof(b)/sizeof(b[0]);
    max(b,c);
}