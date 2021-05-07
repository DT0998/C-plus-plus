#include<iostream>

using namespace std;

int ham1(int x);
int ham2(int &x);
int main(int argc,char** argv){

    // tham chi
    int x=5;
    cout<<"x truoc khi vao ham 1="<<x<<endl;
    ham1(x);
    cout<<"x sau khi vao ham 1="<<x<<endl;

    // tham bien,tham chieu
    x=5;
cout<<"x truoc khi vao ham 2="<<x<<endl;
ham2(x);
cout<<"x sau khi vao ham 2="<<x<<endl;
    return 0;
}
int ham1(int x){
    x=10;
    cout<<"x trong ham 1="<<x<<endl;
}
int ham2(int &x){
    x=10;
    cout<<"x trong ham 2="<<x<<endl;
}