#include<iostream>
using namespace std;

int main(){
    int row,col;
    int n=5;

    for(row=1;row<=n;row++){
        //space
        for(col=1;col<=n-row;col++)
        cout<<"  ";

        //stars
        for(col=1;col<=row;col++){
            cout<<" *"<<"  ";
        }
        cout<<endl;

    }
}


// OUTPUT:

//          *  
//        *   *
//      *   *   *
//    *   *   *   *
//  *   *   *   *   *