#include<iostream>
using namespace std;
int main(){
    int m,n,sm,sn,em,en,p;
    cout<<"Enter the number of rows and column:"<<endl;
    cin>>m>>n;
    cout<<"Enter starting point:"<<endl;
    cin>>sm>>sn;
    cout<<"Enter End point:"<<endl;
    cin>>em>>en;
    p=(sm-em)+(sn-en);
    if(p<0){
        p=p*(-1);
        cout<<"Steps taken: "<<p;
    }
    else{
        cout<<"Steps taken: "<<p;
    }

   
    
   
    return 0;
    
}