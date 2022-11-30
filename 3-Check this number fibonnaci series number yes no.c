#include<stdio.h>
int main()
{
    int i,a=0,b=1,c=0,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;c<num;i++)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==num)
        printf("This is fibonnaci number ");
    else
        printf("This not fibonnaci number ");
    return 0;

}
