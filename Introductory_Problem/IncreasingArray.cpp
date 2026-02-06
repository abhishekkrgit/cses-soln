#include <bits/stdc++.h>
using namespace std;

class IncreasingArray{
	public:
		long long findMinMoves(vector<int>&arr) {
			long long moves = 0;
			int prev = arr[0];
			int n = arr.size();
			for (int i = 1; i < n; i++) {
				if(arr[i] < prev) {
					moves += ((prev) - arr[i]);
				} else {
					prev = arr[i];
				}
			}

			return moves;
		}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    IncreasingArray* increasingArray = new IncreasingArray();
    int n;
    cin >> n;
    vector<int>numsArr(n);

    for(int i = 0; i < n; i++){
    	cin>>numsArr[i];
    }
    cout<<increasingArray->findMinMoves(numsArr);

    return 0;
}