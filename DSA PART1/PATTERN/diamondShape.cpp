#include<iostream>
using namespace std;

int main(){
    int row,col;
    int n=5;

    //upper part of this pattern code
    for(row=1;row<=n;row++){
        //space 
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        //print star
        for(col=1;col<=row;col++){
            cout<<" *"<<"  ";
        }
        cout<<endl;
    }

    //part-2 code of pattern
    for(row=n;row>=1;row--){
        //space 
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        //print star
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
//  *   *   *   *   *
//    *   *   *   *
//      *   *   *
//        *   *
//          *