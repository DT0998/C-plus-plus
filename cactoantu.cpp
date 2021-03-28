#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int x=5,y=10;
    int z=x - y-- +2;
    //step 1: x =5
    //step 2: 5 - 10 +2 =-3 
    //step 3: y-- = 9


    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z;
    return 0;
}