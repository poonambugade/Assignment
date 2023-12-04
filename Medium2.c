//Medium 2 
​
//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
//C program

#include <stdio.h>

int main()
{
    int n,c=0,X,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    c=n/3;
    for(int i=0;i<n;i++)
    {   X=a[i];
       if(X==a[i])
        {  count++;
         if(count==c|| c==0)
         printf("%d\t",a[i]);
        }
    }

    return 0;
}