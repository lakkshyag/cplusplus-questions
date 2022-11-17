#include <iostream>                                             //checks if the input n is a prime number or not

using namespace std;

int main()
{
    cout<<"This is a program to check whether 'n' is a prime number."<<endl;
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int i=2;
    bool divided = false;
    
    if (n==1 || n==0)
    {
        cout<<n<<" is not a prime number.";
    }

    else if (n==2)
    {
        cout<<n<<" is a prime number.";
    }
    
    else
    {
        while (i<=n/2 && divided==false)
        {
            if (n%i==0)
            {
               cout<<n<<" is not a prime number.";
               divided = true; 

            }
            i++;
        }
        if (divided == false)
        {
            cout<<n<<" is a prime number.";
        }
    }


    return 0;
}