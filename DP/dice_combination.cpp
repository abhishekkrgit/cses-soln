#include <bits/stdc++.h>
using namespace std;

class Solution{
private: 
	static const int MOD = 1e9+7;
public:

	int findCount(int n){
		if(n < 0) return 0;
		vector<int>ans(7, 0);

		ans[0] = 1;
		for(int i = 1; i <= n; i++) {
			int currWays = 0;
			for(int diceVal = 1; diceVal <= 6; diceVal++) {
				if(diceVal>i) break;
				currWays = (currWays%MOD +  ans[(i-diceVal)%7]%MOD)%MOD;
			}
			ans[i%7] = currWays;
		}

		return ans[n%7];
	}


};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    Solution * sol = new Solution();
    cout << sol->findCount(n);

    return 0;
}