#include<iostream>

using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,10};
    int n = sizeof(arr)/sizeof(int);
   

    int st=0;
    int end = n;
    
    int target = 7;
    while(st<=end){
        int mid = (st+end)/2;
        if(mid==target){
            return mid;
        }
        else{
            if(mid>target){
                st=mid+1;



            }
            if(mid<target){
                end = mid-1;
            }
        }
        



    }

    

}
