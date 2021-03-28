#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc,char** argv){
    double toan,ly,hoa;
    double dtb;
    cout<<"chuong trinh tinh diem trung binh"<<endl;
    cout<<"nhap diem toan:";
    cin>>toan;
    cout<<"nhap diem ly:";
    cin>>ly;
    cout<<"nhap diem hoa:";
    cin>>hoa;
    dtb=(toan+ly+hoa)/3;
    cout<<"diem trung binh = "<<dtb<<endl;
    cout<<"diem trung binh lam tron = "<<setprecision(3)<<dtb;



    return 0;



}