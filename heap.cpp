#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class MaxHeap{
    int *arr;
    int size;
    int total_size;

    public:

        MaxHeap(int n){
            arr= new int[n];
            size = 0;
            total_size=n;
        }

        void insertion(int value){
            if(size==total_size){
                cout<<"HeapOverflow\n";
                return;
            }

            arr[size]=value;
            int index = size;
            size++;

            while(index>0 && arr[(index-1)/2<arr[index]]){
                swap(arr[index] , arr[(index-1)/2]);
                index = (index-1)/2;
            }

        }
        void print(){
            for(int i=0  ; i<size ; i++){
                cout<<arr[i]<<" ";
                cout<<endl;
            }
        }



};

int main() {
    MaxHeap m1(6);

    m1.insertion(4);
    m1.insertion(5);
    m1.insertion(8);
    m1.insertion(10);
    m1.print();

    
    return 0;
}