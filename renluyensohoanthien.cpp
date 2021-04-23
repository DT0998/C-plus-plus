#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int n;
    cout<<"nhap n:";
    cin>>n;
    int sum_uoc=0;
    int i=1;
    while (i<=n)
    {
      if(n%i==0)//i la uoc so cua n
      sum_uoc+=i;
      i++;
    }
    if (sum_uoc==n)
    {
        cout<<n<<"la so hoan thien";
    }else{
        cout<<n<<" khong la so hoan thien";
    }
    
return 0;

}