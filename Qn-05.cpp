/*Define a function to merge two sorted arrays  */

#include<iostream>
using namespace std ;

void sorting(int a[] , int size)
{
    int i , j , t ;
    for (i=0 ; i<=size-2 ; i++)
        for (j=i+1 ; j<=size-1 ; j++)
            if(a[i]>a[j])
            {
                t = a[i] ;
                a[i] = a[j] ;
                a[j] = t ;
            }
}
void merge (int a[] , int b[] , int size1 , int size2)
{
    sorting(a, size1) ;
    sorting(b, size2) ;

    int temp [size1+size2] ;

    int i , j , k ;
    for (i=0,j=0, k=0 ; i<size1 && j<size2 ; k++)
    {
        if (a[i]<b[j])
        {
            temp[k] = a[i] ;
            i++ ;
        }
        else 
        {
            temp[k] = b[j] ;
            j++ ;
        }
    }

    while (j<size2)
    {
        temp[k] = b[j] ;
        j++ ;
        k++ ;
    }
    
    while (i<size1)
    {
        temp[k] = a[i] ;
        i++ ;
        k++ ;
    }
    

    for (i=0 ; i<=size1+size2-1  ; i++)
        cout<<temp[i]<<" " ;

    
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

    merge(a,b,5,5) ;

    
    
}
