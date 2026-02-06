#include <bits/stdc++.h>
using namespace std;

class Repitions {
public:
	int findLongestRepition(string & str) {
		char prev = '\0';
		int cnt = 0;
		int maxi = 0;

		for(auto &ch: str){
			if(ch == prev){
				cnt++;
			} else{
				prev = ch;
				cnt = 1;
			}

			maxi = max(maxi, cnt);
		}
		return maxi;
	}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin>>str;

    auto * repitions = new Repitions();
    cout << repitions->findLongestRepition(str);


    return 0;
}