#include<stdio.h>
int main(){
    int i,n,a=-1,b=1,c;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        
    }
    printf("\nNth term is %d",c);
    printf("\n");
    return 0;
}