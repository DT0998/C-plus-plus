#include <iostream>
using namespace std;

int main(int argc,char** argv){
    int a;
    cout<<"nhap 1 so:";
    cin>>a;
    if(a>=0){
cout<<a<<" la so duong"<<endl;

    }else{
        cout<<a<<" la so am"<<endl;
        cout<<"ban nhap so am";
    }
    return 0;
}