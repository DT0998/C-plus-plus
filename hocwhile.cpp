#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int n=5;
    int sum=0;
    int i=1;
    cout<<"nhap 1 so:";
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum ="<<sum;
    return 0;
}