#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Enter the number till which you want the sum: ";
    cin >> n;

    int result = sum(n);
    cout << "Sum of first " << n << " numbers is: " << result << endl;

    return 0;
}
