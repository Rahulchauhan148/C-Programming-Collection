    
#include <iostream>
using namespace std;

int main() {
int n,a,b,c,s;
cout<<" Enter three digits = ";
cin>>n;
a=n/100;
b=n%100;
c=b%10;
b=b/10;
if(a==b || b==c || a==c || a==b==c){
    cout<<"Digits are Repeated ";
}
else{
s=222*(a+b+c);
cout<<s;
}
    return 0;
}