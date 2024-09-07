#include <iostream>
using namespace std;
int main()
{
    
    int a,b,c;
    cout<<"Enter value of A  : " ;
    cin>>a;
    cout<<"Enter value of B  :" ;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"A = " <<a<<endl;
    cout<<"B = " <<b<<endl;


    return 0;

}