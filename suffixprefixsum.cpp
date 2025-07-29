#include <iostream>
#include <vector>
using namespace std;

bool checkvector(vector<int>& vs) {
    int total_sum = 0;
    for (int val : vs) {
        total_sum += val;
    }

    int prefix_sum = 0;
    for (int i = 0; i < vs.size() - 1; i++) { 
        prefix_sum += vs[i];
        int suffix_sum = total_sum - prefix_sum;

        if (prefix_sum == suffix_sum) {
            return true; 
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> vs(n);
    for (int i = 0; i < n; i++) {
        cin >> vs[i];
    }

    cout << (checkvector(vs) ? "true" : "false") << endl;

    return 0;
}
