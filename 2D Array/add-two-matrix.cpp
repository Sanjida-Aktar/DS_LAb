#include<iostream>
using namespace std;
main(){
    int r1,c1,r2,c2;
    cout<<"enter r1 and c1: ";
    cin>> r1>> c1;
    cout<<"enter r2 and c2: ";
    cin>> r2>> c2;
// declare three array
    int A[r1][c1], B[r2][c2], C[r1][c2];

    if(r1==r2 && c1==c2){

        //input matrix A
        for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<< "A["<<i<<"]["<<j<<"]= ";
            cin>> A[i][j];
        }
    }
// input matrix B
cout<<endl;
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<< "B["<<i<<"]["<<j<<"]= ";
            cin>> B[i][j];
        }
    }
// add two matrix
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    // print result 
cout<< endl<<"C= "<<endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<< C[i][j]<<" ";
        }
        cout<< endl;
    }
    
    }
    else{
        cout<< "Not possible";
    }
}