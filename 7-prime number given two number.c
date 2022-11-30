#include<stdio.h>
int main()
{
  int i,n,x,y,flag;
  printf("Enter two numbers :");
  scanf("%d%d",&x,&y);
  for(n=x;n<=y;n++)
    {
     flag=0;
     for (i=2;i<=n/2;i++)
       {
        if(n%i==0)
  	      {
     	    flag++;
  	        break;
	      }
       }
    if(flag==0 && n!=1 )
	 printf("%d\n",n);
  }
  return 0;
}
