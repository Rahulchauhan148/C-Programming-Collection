#include<iostream>
using namespace std;
int main(){
    int temp=1,n,x;
    cout<<"Enter the Value of N :";
    cin>>n;
    for (int i=0;i<n-1;i++){
        int x;
        cout<<"Enter numbers which are present: \n";
        cin>>x;
        if (temp==x){
            temp=temp+1;
            
        }
        
        
    }
    cout<<"Friend which not present in party is :"<<temp;
    
    return 0;
    
}