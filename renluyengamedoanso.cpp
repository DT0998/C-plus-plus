#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(int argc,char** argv){
     srand(time(NULL));
    while (true)
    {
        bool iswin=false;
      int somay=1+rand()%100;
      cout<<"chuong trinh choi game doan so:"<<endl;
      cout<<"may da doan so [1...100],moi ban doan!"<<endl;
    int solandoan=0;

    do
    {
    // cout<<"so may="<<somay<<endl;
    int songuoi;
    cin>>songuoi;
    solandoan++;
    cout<<"ban doan lan thu "<<solandoan<<endl;
    if (songuoi==somay)
    {
        cout<<"ha ha ban tai that,so may = "<<somay<<endl;
        iswin=true;
        break; // thang va ngung vong lap
    }else if (songuoi>somay)
    {
       cout<<"ban doan sai,so nguoi>so may"<<endl;
    }else{
        cout<<"ban doan sai,so nguoi < so may"<<endl;
    }

    if (solandoan==7)
    break; //ngung
    } while (true);

    if (iswin!=true)
    {
      cout<<"game over!"<<endl;
      cout<<"so cua may = "<<somay<<endl;
    }
    cout<<"co hay khong(c/k):"<<endl;
    char c;
    cin>>c;
    if (c=='k')
    break; // ngung game
    }
    cout <<"goodbye!";
    return 0;



    
}