#include<iostream>
using namespace std;
void bubble(int arr[] , int n){
    for(int i = 0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);


            }


        }
    }


}

void print(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" " ;



    }
    }




int main(){

    int arr[]={4,1,19,18,20,0};
    int n=6;
    bubble( arr ,  n);
    print(arr,n);



}