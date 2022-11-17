#include <iostream>                                             //This programs compares 2 numbers a & b and prints corresponding outputs  

using namespace std;

int main()
{
    int a,b;
    
    cout<<"Enter value for a: ";
    cin>>a;

    cout<<"Enter value for b: ";
    cin>>b;

    if (a==b)
    {
        cout<<"Hey these are equal";
    }
    
    else if (a<b)
    {
        cout<<"a is lesser than b";
    }

    else 
    {
        cout<<"a is greater than b";
    }

    return 0;

}