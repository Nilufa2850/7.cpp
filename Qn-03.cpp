/*Define a function to print a substring from startinedx to endindex. 
If 2nd argument is not provided , string will print till the last possible index.*/

#include<iostream>
#include<string.h>

using namespace std ;

void substring (char[] , int, int=1) ;

int main ()
{
    char a[50] ;
    cout<<"Enter string :"<<endl ;
    cin.getline(a,50) ;
    cout<<endl ;

    int l = strlen(a) ;
    cout<<"String Length is "<<l<<endl ;

    cout<<endl ;

    substring(a,1,5) ;
}

void substring (char str[] , int start , int end)
{
    int i ;
    for (i=start ; i<end ; i++)
        cout<<str[i] ;

    if (end==1)
    {
        for (i=start ; str[i] ; i++)
            cout<<str[i] ;
    }
}
