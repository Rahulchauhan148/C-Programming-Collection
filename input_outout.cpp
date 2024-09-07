#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter 1st number :";
    cin>>x;
    int y;
    cout<<"Enter 2nd number :";
    cin>>y;
    int sum;
    sum=x+y;

    cout<<"Sum of X and Y is :"<< sum<<endl ;

    int  product = x * y;
    cout<<"X*y is  "<< product<<endl;

    int divide;
    divide=x/y;
    cout << "X/Y is "<< divide<<endl;
    
    int modulus;
    modulus=x%y;
    cout<<"remender of X/Y is "<<modulus<<endl;
    
    return 0;

    }
    