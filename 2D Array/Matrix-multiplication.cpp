#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;

    cout<<"enter the number of row and col: ";
    cin>> r1>> c1;
    
    cout<<"enter the number of row and col: ";
    cin>> r2>>c2;
   

    
    if(c1== r2){
       int A[r1][c1], B[r2][c2], C[r1][c2];

       //input array A
       for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<< "A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
       }
       //input array B
       for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<< "B["<<i<<"]["<<j<<"]= ";
            cin>>B[i][j];
        }
       }
       
       //initialize array c
       for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            C[i][j]=0;
        }
       }
       // multiplication
       for(int i=0;i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
       }

       ///output array
      cout<<"Multiply array:"<< endl;
      cout<<" C = "<<endl;
      for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout << C[i][j] <<" ";
        }
        cout<< endl;
       }

    }

    else{
        cout<<"not possible";
        return 0;
    }
}

