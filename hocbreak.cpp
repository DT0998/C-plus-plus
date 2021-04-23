#include <iostream>
using namespace std;

int main(int argc,char** argv){
    int sum=0;
    int n;
    cout<<"nhap n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        if (sum>=9)
          break;
          sum+=i;
    }
    cout<<"sum="<<sum;
    
  



    return 0;
}