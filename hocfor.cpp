#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int i,n,sum;

    cout<<"Nhap n:" ;
    cin>>n;
    sum =0;
    for(i=1;i<=n;i++){
sum +=i;
cout<<"sum = " <<sum;
    }
    return 0;
}