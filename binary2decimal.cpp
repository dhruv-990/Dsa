#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int num;

    cout<<" Enter A decimal number\n";
    cin>>num;

    if(num==0){
        cout<<"Binary will be 0\n";

    }
    int val =num;
    vector<int> bina;

    while(val>0){
        bina.push_back(val%2);
        val = val/2;
    }
    
    cout<<"Biary will be:";
    for(int i=bina.size()-1 ; i>=0 ; i--){
        cout<<bina[i];
    }


    

    
}