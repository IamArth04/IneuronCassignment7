#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n==a||n==b)
    printf("Fibonacci");
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    printf("Fibonacci");
    else
    printf("Not a Fibonacci");

    printf("\n");
    return 0;
}