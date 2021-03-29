#include <iostream>
#include <math.h>

using namespace std;

int main(int argc,char** argv){
    int a,b,c;
    cout<<"phuong trinh bac 2:ax^2+bx+c=0"<<endl;
    cout<<"nhap a:";
    cin>>a;
    cout<<"nhap b:";
    cin>>b;
    cout<<"nhap c:";
    cin>>c;
    if (a==0)
    {
        // bx+c=0
        if (a==0 && c==0)
        {
            cout<<"PT vo so nghiem";
        }else if (b==0 & c!=0)
        {
            cout<<"PT vo nghiem";
        }
        else{
            //bx = -c=>x=-c/b
            double x=-c/b;
            cout<<"PT co 1 nghiem x= "<<x<<endl;

        }
      
        
    }else{
        double delta=pow(b,2)-4*a*c;
        if (delta<0)
        {
            cout<<"pt vo nghiem!";
        }
        else if (delta ==0)
        {
            double nkep=b/(2*a);
            cout<<"pt co nghiem kep,x1=x2="<<nkep;
        }
        else{
            double x1=(-b-sqrt(delta))/(2*a);
            double x2=(-b+sqrt(delta))/(2*a);
            cout<<"pt co 2 nghiem phan biet"<<endl;
            cout<<"x1="<<x1<<endl;
            cout<<"x2="<<x2<<endl;
        }
        

    }

    




    return 0;
}