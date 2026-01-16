#include <bits/stdc++.h>
using namespace std;

int getMissingNum(int n, vector<int>&numList){
    int xorVal = 0;
    for(int i = 1; i <= n; i++){
    	xorVal ^= i;
    }

    for(auto val: numList){
    	xorVal ^= val;
    }

    return xorVal;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int>numList;
    for(int i = 0; i < n-1; i++){
    	int val;
    	cin >> val;
    	numList.push_back(val);
    }

    cout<<getMissingNum(n, numList);

    return 0;
}