#include <iostream>

using namespace std;
// prototype
int tong2so(int a,int b);
void xuatdulieu(int x);

int main(int argc,char** argv){
    int a,b;
    cout<<"nhap a:";
    cin>>a;
    cout<<"nhap b:";
    cin>>b;
    int kq=tong2so(a,b);
    cout<<"tong "<<a<<"+"<<b<<"="<<kq<<endl;
    int kq2=tong2so(113,114);
    cout<<"kq2="<<kq2;

    return 0;
}
int tong2so(int a,int b){

    return a+b;
}
void xuatdulieu(int x){
cout<<x<<endl;
}