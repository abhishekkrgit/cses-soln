#include <bits/stdc++.h>
using namespace std;

class RemovingDigits {
public:
	int stepsToMakeZero(int n){
		vector<int>stepCnt(n+1, 1e9);
		stepCnt[0] = 0;

		for(int i = 1; i <= n; i++) {
			string str = to_string(i);
			for(auto& ch: str){
				if(i-(ch-'0') >= 0 ) {
					stepCnt[i] = min(stepCnt[i], 1 + stepCnt[i-(ch-'0')]);	
				}
			}
		}

		return stepCnt[n];
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

    RemovingDigits* removingDigits = new RemovingDigits();
    cout<<removingDigits->stepsToMakeZero(n);

    return 0;
}