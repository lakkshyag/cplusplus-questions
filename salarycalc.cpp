#include <iostream>                                  //this program finds total salary when base salary (number) and a grade (A,B, else) is entered

using namespace std;

int main()
{
    double x;
    char g;

    cout<<"Enter base salary: ";
    cin>>x;
    cout<<"Enter grade: ";
    cin>>g;

    int semitotal=1.59*x;
    int total;

    if (g=='A')
    {
        total=semitotal+1700;
        cout<<"Total salary: "<<total;
    }
    else if (g=='B')
    {
        total=semitotal+1500;
        cout<<"Total salary: "<<total;
    }
    else
    {
        total=semitotal+1300;
        cout<<"Total salary: "<<total;
    }
    

    return 0;
}