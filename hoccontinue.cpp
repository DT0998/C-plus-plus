#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int i=0,n=5;
    int sum=0;
    do{
        i++;
        if(i==2 || i ==4)
        continue;
        sum+=i;
    }while (i<n);
      cout<<"sum="<<sum;
    return 0;
}