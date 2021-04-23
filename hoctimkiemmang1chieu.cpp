#include <iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cout<<"nhap so phan tu trong mang:";
    cin>>n;
    int m[n];
    cout<<"moi ban nhap cac gia tri cho phan tu:";
    for(int i=0;i<n;i++){
        cin>>m[i];
        cout<<"m["<<i<<"]=";
    }
    cout<<"mang khi ban nhap:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<m[i]<<"\t";
    }
    int k;
    cout<<"nhap k muon tim:";
    cin>>k;
    int dem=0;
    bool kq=false;
    for(int i =0;i<n;i++){
        if(m[i]==k)
        {
            kq=true;
            // break;
            dem++;
        }
    }
        if(kq==true)
        {
            cout<<"thay"<<k<<"xuat hien"<<dem<<"lan"<<" trong mang";

        }else{
            cout<<" khong thay"<<k<<" trong mang";
        }
    


    return 0;
}