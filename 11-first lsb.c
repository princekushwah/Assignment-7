#include <stdio.h>
 int main()
{
    int n,len,pos=0,i=0,count=0;
    printf("position of 1-bits in a number for given length\n");
    printf("enter a number\n");
    scanf("%d", &n);
    printf("enter the length\n");
    scanf("%d", &len);
    while (i <= 32)
    {
        if ((n & 1) ==  1)
        {
            count++;//counting the consecutive 1's in the integer
            pos = i;
            if (count==len)
             break;
        }
        if ((n & 1) ==  0)
         count = 0;
         n = n>>1;
         i++;
    }
    printf("the position of 1 in the string : %d\n", pos);
    return 0;
}
