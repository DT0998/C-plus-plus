#include <iostream>

using namespace std;

int main(int argc,char** args){
    cout<<"xem diem trung binh"<<endl;
    cout<<"nhap diem trung binh:";
    int dtb;
    cin>>dtb;
    if(dtb<0 || dtb>10)
    {
        cout <<"diem nhap khong hop le";

    }else{
        if(dtb>=5){
            cout<<"ban dau!";
        }else{
            cout<<"ban rot!";
        }
    }


    return 0;
}