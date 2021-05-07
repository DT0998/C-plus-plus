#include <iostream>

using namespace std;
int tinhgiaithua(int n);
int main(int argc,char** argv){
    // 5!=1*2*3*4*5
        int gt=tinhgiaithua(5);
        cout<<"5!="<<gt<<endl;


    return 0;
}
int tinhgiaithua(int n){
    if(n<=1) 
    return 1;
    return n*tinhgiaithua(n-1);

}
void H10toH2(int n){
    if (n>0)
    {
        int t=n%2;
        H10toH2(n/2);
        cout<<t<<"";
    }
    
}