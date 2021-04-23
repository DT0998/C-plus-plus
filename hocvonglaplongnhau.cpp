#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int h;
    cout<<"nhap chieu cao:";
    cin>>h;
    for (int i = 0; i < h; i++)
    {
       for (int j = 0; j<h; j++)
       {
           if (j==0||i==h-1||i==j)
           {
               cout<<"*";
           }else
            cout<<" ";
       }
           cout<<endl;
       }
    return 0;
       
}
    
