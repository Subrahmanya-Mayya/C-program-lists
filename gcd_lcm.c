#include <stdio.h>
void lcmGcd(int ,int); 
int main()
{
    int m,n;
 
    printf("Enter two numbers : ");
    scanf("%d %d",&m,&n);
    lcmGcd(m,n);
    return 0;
}
 
void lcmGcd(int m,int n)
{
    int gcd,lcm,remainder,numerator,denominator;
    if(m>n)
    {
        numerator=m;
        denominator=n;
    }
    else
    {
        numerator=n;
        denominator=m;
    }
    remainder=numerator%denominator;
    while(remainder!=0)
    {
        numerator=denominator;
        denominator=remainder;
        remainder=numerator%denominator;
    }
    gcd = denominator;
    lcm = m*n/gcd;
 
    printf("GCD of %d and %d = %d\n",m,n,gcd);
    printf("LCM of %d and %d = %d\n",m,n,lcm);
}