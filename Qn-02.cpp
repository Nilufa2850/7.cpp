/*Define a c++ overloaded function to calculate volume of a cuboid
 cone and sphere */

#include<iostream>
using namespace std ;
int volume (int,int,int);
float volume (int,int );
float volume (int);

int main ()
{
    cout<<"Volume of cuboid is "<<volume(3,4,2)<<endl ;
    cout<<"Volume of cone is "<<volume(2,4)<<endl ;
    cout<<"Volume of sphere is "<<volume(5)<<endl ;

    return 0 ;
}

int volume (int l , int b , int h)
{
    return l*b*h ;
}
float volume (int r , int h)
{
    return 3.14*r*r*(h/3.0) ;
}
float volume (int r)
{
    return (4/3.0)*3.14*r*r*r ;
}
