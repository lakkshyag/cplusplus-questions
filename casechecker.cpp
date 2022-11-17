#include <iostream>                                              //This program lets you know if an input character is uppercase (1), lowercase (0)

using namespace std;                                             //or its not an alphabet (-1)

int main()
{
    char i;
    cout<<"Enter a character: ";
    cin>>i;
    int x=i;
    
    if (65<=x && x<=90)
    {
        cout<<1;
    }
    else if (97<=x && x<=122)
    {
        cout<<0;
    }
    else
    {
        cout<<-1;
    }

    
    return 0;    
}