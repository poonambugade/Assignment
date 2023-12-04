// Hard 3
// Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

#include <stdio.h>

int main()
{
   int n,temp=1,rem=0,count=0;
   scanf("%d",&n);
  for(int i=1;i<=n;i++)
   {  temp=i;
       while(temp>0)
      { 
          rem=temp%10;
          if(rem==1)
            count++;
          temp/=10;
        
      }
   }
   printf("%d",count);

    return 0;
}
