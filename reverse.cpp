#include<iostream>
using namespace std;
int main(){
    int num;
    //cout<<"Enter a Number";
    //cin>>num;
    num=756; 
  int  rev=0;
  int step=0;
    while(num!=0)
    {
        rev = rev*10 + num%10;
        num/=10;
        step++;
        cout<<"Step "<<step<<" - "<<rev<<endl;
                }
    cout<<endl;
    cout << "Reverse of the number is: " << rev ;
                                   
}
