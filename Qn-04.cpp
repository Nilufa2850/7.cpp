/*Define a function to swap to arrays */

#include<iostream>
using namespace std ;

void swapping(int x[] , int y[] , int size)
{
    int i ;
    int temp[size] ;

    for (i=0 ; i<size ; i++)
    {
        temp[i] = x[i] ;
        x[i] = y[i] ;
        y[i] = temp[i] ;
    }

    for (i=0 ; i<size ; i++)
        cout<<x[i]<<" " ;

    cout<<endl ;

    for (i=0 ; i<size ; i++)
        cout<<y[i]<<" " ;
}

int main ()
{
    int a[5] , b[5] ;
    cout<<"Enter a & b array values : " ;
    int i ; 
    for (i=0 ; i<5 ; i++)
        cin>>a[i] ;
    for (i=0 ; i<5 ; i++)
        cin>>b[i] ;

    swapping(a, b , 5) ;
    
}
