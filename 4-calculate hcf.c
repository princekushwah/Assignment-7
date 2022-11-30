#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    for(i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
          break;
    }
    printf("%d and %d Hcf is  : %d ",a,b,i);
    return 0;

}
