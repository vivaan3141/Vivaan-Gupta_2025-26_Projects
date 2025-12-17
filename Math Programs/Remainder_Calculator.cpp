// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int div1;
    int div2;
    double quo;
    cout<<"1:"<<endl;
    cin>>div1;
    cout<<"2:"<<endl;
    cin>>div2;
    quo=div1/div2;
    if (div1%div2==0){
        cout<<"Solution: "<<quo;
    }else{
        quo=floor(quo);
        cout<<"Solution: "<<quo<<" Remainder "<< (div1%div2);
        
    }
    

    return 0;
}

