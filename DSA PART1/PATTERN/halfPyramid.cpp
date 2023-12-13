#include<iostream>
using namespace std;

int main(){
    int row,col,n;
    cout<<"enter input :"<<endl;
    cin>>n;
    
    for(row=1;row<=n;row++){
        //space
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }

        //print stars
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}