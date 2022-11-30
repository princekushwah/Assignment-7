#include<stdio.h>
int main()
{
    int i,a=0,b=1,c=0,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}
