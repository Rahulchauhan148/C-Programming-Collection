#include <iostream>
using namespace std;
class rectangle {float length , breadth ;

    public :
    rectangle(){
        length=10.0;
        breadth=41.2;

    }
    
    float area(){
        return(length*breadth);
    }
};
int main(){
    rectangle rect;
    cout<<rect.area();

    return 0;
}