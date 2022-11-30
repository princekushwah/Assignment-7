#include<stdio.h>
#include<math.h>
int main()
{
  int x,count=0,sum=0;
  printf("Enter a number : ");
  scanf("%d",&x);
    int n=x;
  while(n!=0)
  {
    n=n/10;
    count++;
  }
  n=x;
  while(n!=0)
  {
    sum = sum+pow(n%10,count);
    n=n/10;
  }
  if(x==sum)
    printf("yes\n");
  else
    printf("No");
    return 0;
}
