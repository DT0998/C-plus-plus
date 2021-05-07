#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(int argc,char** argv){
    srand(time(NULL));
    int row,col;
    cout<<"nhap so dong:"; 
    cin>>row;
    cout<<"nhap so cot:";
    cin>>col;
int m[row][col];


//so ngau nhien
for(int i=0;i<row;i++){
    for (int j = 0; j < col; j++)
    {
        m[i][j]=rand()%100;
    }
    
}
cout<<"mang sau khi nhap ngau nhien:"<<endl;


//xuat 2 mang
for(int i=0;i<row;i++){
    for (int j = 0; j < col; j++)
    {
        cout<<m[i][j]<<endl;
    }
    cout<<endl;
    
}


cout<<"ban muon xuat dong nao:";
int r;
cin>>r;
for(int j =0;j<col;j++){
    cout<<m[r][j]<<endl;  //thay doi row
    cout<<"ban muon xuat cot nao"<<endl;
    int c;
    cin>>c;
    for(int i=0;i<row;i++){
        cout<<m[i][c]<<endl; //thay doi col

        //duong cheo chinh
        if (row==col)
        {
            cout<<"duong cheo chinh"<<endl;
         for (int i = 0; i < row; i++)
         {
            cout<<m[i][j]<<endl;
            cout<<"duong cheo phu:"<<endl;
            for (int i = 0; i < row; i++)
            {
              cout<<m[i][row-i-1]<<endl;
            }
            
         }

         
        }
        
    }
    return 0;
}
    return 0;
}
