#include <bits/stdc++.h>
using namespace std;

class CoinCombination {
private:
	static const int MOD = 1e9 + 7;
public : 
	int countWays(int n, vector<int>&coins) {
		vector<int>dp(n+1, 0);

		sort(coins.begin(), coins.end());

		dp[0] = 1;
		for(int i = 1; i <= n; i++){
			for(auto& coin: coins){
				if(i-coin >= 0){
					dp[i] = ( dp[i] + dp[i-coin])%MOD;
				} else break;
			}
		}
		return dp[n];
	}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, noOfCoin;
    cin >> noOfCoin;
    cin>> n;

    vector<int>coins(noOfCoin);
    for(int i = 0; i < noOfCoin; i++){
    	cin>>coins[i];
    }
    CoinCombination* coinCombination = new CoinCombination();
    cout<<coinCombination->countWays(n, coins);

    return 0;
}