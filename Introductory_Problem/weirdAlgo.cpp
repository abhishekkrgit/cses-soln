#include <bits/stdc++.h>
using namespace std;

// This function calculates the sequence and RETURNS it as a vector
vector<long long> getSequence(long long n) {
    vector<long long> res;
    while (true) {
        res.push_back(n); // Store the current number
        if (n == 1) break; // Stop when we reach 1
        
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
    }
    return res; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long n;
    if (!(cin >> n)) return 0;

    // Get the sequence from our function
    vector<long long> v = getSequence(n);  

    // Range-based for loop: the cleanest way to print a vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << (i == v.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}