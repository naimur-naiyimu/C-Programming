#include<stdio.h>
void odd(int a){
    if(a%2==0)  
        printf("even\n");
    else
        printf("odd\n");
}
int main()
{
    int a;
    scanf("%d",&a);
    odd(a);
}