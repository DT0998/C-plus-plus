#include <iostream>

using namespace std;

int main(int argc,char** argv){
    cout<<"chuong trinh tinh chu vi-dien tich tam giac"<<endl;
    double r;
    const double PI=3.14;
    double chuvi,dientich;
    cout<<"moi nhap ban kinh:";
    cin>>r;
    chuvi=2*PI*r;
    dientich=PI*r*r;
    cout<<"chu vi = "<<chuvi<<endl;
    cout<<"dien tich = "<<dientich;

    return 0;

}