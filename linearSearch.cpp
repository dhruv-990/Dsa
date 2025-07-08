#include<iostream>
using namespace std;

int linear(int arr[] , int n,int target){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;  
}

int main(){
    int n;
    int arr[100];
    cout << "Enter the size of array" << endl;
    cin >> n;

    cout << "Enter the elements in array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element in array" << endl;
    int target;
    cin >> target;

    int index = linear(arr , n , target);
    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
