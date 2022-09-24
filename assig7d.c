#include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b; H>=1;H--)
    {
        if(a%H==0&&b%H==0)
            break;
    }
    printf("HCF is %d",H);
    printf("\n");
    return 0;
}