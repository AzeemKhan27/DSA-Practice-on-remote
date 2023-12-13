#include<iostream>
using namespace std;

int main(){
    int row,col,n;
    cout<<"enter input : ";
    cin>>n;

    for(row=1;row<=n;row++){
        //print stars
        for(col=1;col<=n;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}