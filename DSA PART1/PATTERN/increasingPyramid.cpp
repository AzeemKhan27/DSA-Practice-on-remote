#include<iostream>
using namespace std;

int main(){
    int row,col;
    int n=5;

    for(row=1;row<=n;row++){
        //spaces
        for(col=1;col<=n-row;col++){
            cout<<"   ";
        }
        //numbers
        for(col=1;col<=2*row-1;col++){
            cout<<col<<"  ";
        }
        cout<<endl;
    }
}



// OUTPUT:

//             1  
//          1  2  3
//       1  2  3  4  5
//    1  2  3  4  5  6  7
// 1  2  3  4  5  6  7  8  9