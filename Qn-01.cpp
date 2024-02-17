/*Define a c++ function to calculate HCF of two numbers. */

#include<iostream>
using namespace std ;

int hcf(int x, int y)
{
    int i ;
    for (i=x<y?x:y ; i>0 ; i--)
        if (x%i==0 && y%i==0)
            return i ;
}
int main ()
{
    cout<<"hcf is "<<hcf(24,36) ;
    return 0 ;
}
