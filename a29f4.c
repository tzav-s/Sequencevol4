#include <stdio.h>
#include "simpio.h"
int ph(int x,int i);
int coprime (int x,int i);
int gcd(int x,int i);

int main ()
{
    int x,i;

    printf("Enter x:");
    x=GetInteger();

    for (i=1;i<=x;i++)
    {
      printf("ph(%d)=%d",i,ph(x,i));

    }
}
int ph(int x,int i)
{
    int count =0;

    count+=coprime(x,i);

    return count;


}
int coprime (int x,int i)
{
    if (gcd(x,i)==1)
        return 1;
    else
        return 0;
}
int gcd(int x,int i)
{
  if (i!=0)
    return gcd(i,x%i);
   else
     return x;

}
