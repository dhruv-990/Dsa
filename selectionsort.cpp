#include<iostream>
using namespace std;

void selection(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        int smallindx=i;
        for(int j=i+1 ;  j<n ; j++){
            if(arr[j]<arr[smallindx]){
                smallindx=j;
            }
        }

        swap(arr[i] , arr[smallindx]);
    }


}

void printarray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";

    }
}

int main(){
   int n;
    cin >> n;  // size of the array

    int arr[100];  // declaring array of size n
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // taking array elements as input
    }
    


    selection( arr ,  n);
    printarray( arr ,  n);


}