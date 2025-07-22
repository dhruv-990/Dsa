#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void sumvector(vector<int> &vs){
    for(int i=1 ; i<vs.size() ; i++){
        vs[i]+= vs[i-1];
        return;
    }
}

int main() {
    int n;

    cin>> n;

    vector<int> vs;
    for(int i=0 ; i<n; i++){
        int ele;
        cin>>ele;

        vs.push_back(ele);
    }

    sumvector(vs);

    for(int j=0 ; j<vs.size() ; j++){
        cout<<vs[j];
    }

    return 0;
}