#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc,char** argv){
    srand(time(NULL));
    int n;
    cout<<"nhap so phan tu:";
    cin>>n;
    int m[n];

    for(int i=0;i<n;i++)
    {
        m[i]=rand()%100;
    }
    cout<<"mang sau khi nhap ngau nhien:"<<endl;
     for(int i = 0;i<n;i++)
     {
   
        cout<<m[i]<<"\t";
    }
    cout<<"\n"<<" mang sau khi sap xep:"<<endl;
    for(int i =0;i<n-1;i++){
        for (int j =i+1; j <n; j++)
        {
            if (m[i]<m[j])
            {
               int tam=m[i];
               m[i]=m[j];
                m[j]=tam;
            }
        }
    }
     for(int i = 0;i<n;i++)
     {
   
        cout<<m[i]<<"\t";
    }
    return 0;
}
