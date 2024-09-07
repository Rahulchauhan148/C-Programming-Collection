#include<iostream>
using namespace std;
void strpat(int n){
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
    }
    cout<<endl;
}
}
int main()
{
    cout<<"Enter the N:";
    int n;
    cin>>n;
    strpat(n);
   
return 0;
}