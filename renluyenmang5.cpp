#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(int argc,char** argv){
    int n;
    cout<<"nhap so phan tu:";
    cin>>n;
    int M[n];
    for (int i = 0; i < n; i++)
    {
      M[i]=rand()%100;
    }
    cout<<"du lieu toan bo mang:"<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<M[i]<<endl;
    }


    // tim so le
    int sole=0;
    cout<<"Cac so le cua mang:";
    for (int i = 0; i < n; i++)
    {
       if (M[i]%2!=0)
       {
          cout<<M[i]<<endl;
          sole+=1;
       }
       
    }
    cout<<"==>Co"<<sole<<" le trong mang"<<endl;


    // tim so chan
      int sochan=0;
    cout<<"Cac so chan cua mang:";
    for (int i = 0; i < n; i++)
    {
       if (M[i]%2==0)
       {
          cout<<M[i]<<endl;
          sochan+=1;
       }
       
    }
    cout<<"==>Co"<<sochan<<" chan trong mang"<<endl;

// so nguyen to
cout<<"cac so nguyen to trong mang"<<endl;
for (int i = 0; i < n; i++)
{
  int dem=0;
  for (int j = 1; j <= M[i]; j++)
  {
     if (M[i]%j==0)
     {
         dem++;
     }
     
  }
  if (dem==2)
  {
   cout<<M[i]<<endl;
  }
  
  

}


    return 0;
}

