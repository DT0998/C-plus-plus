#include <iostream>

using namespace std;


void hamgido(int x,int y=1){
    cout<<(x+y)<<endl;
}

int main(int argc,char** argv){
hamgido(9);
hamgido(9,2);

    return 0;
}