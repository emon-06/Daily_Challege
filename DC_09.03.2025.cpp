#include <iostream>
using namespace std;

void rec(int n) {
    if (n == 0) return; 
    rec(n - 1); 
    cout << n << endl;
}

int main() {
    int N;
    cin >> N;
    rec(N);
    return 0;
}


// Print 1 to N using Recursion 
