#include<iostream>
using namespace std;
int mergeSort(int arr, int left, int right);
int main(){
     int n;
     cin>> n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     cout<<"Original Array:\n";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
     }
     mergeSort(arr[n],0,n);

     cout<<"Sorted Array:\n";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
     }
    return 0;
}
int mergeSort(int arr, int left, int right){
    if(left<right){
        int mid= left+ (right-left)/2;

        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1, right);

        merge(arr,left,mid,right);
    }
}
int merge(int arr, int left, int mid, int right){

}