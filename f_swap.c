#include<stdio.h>
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
}