#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	vector<pair<int , int>> v;
	int play1 = 0 , play2 = 0;
	while (t --) {
	    int a , b;
	    cin >> a >> b;
	    play1 += a;
	    play2 += b;
	    if (play1 > play2)
	        v.push_back({abs(play1 - play2) , 1});
	    else
	        v.push_back({abs(play1 - play2) , 2});
	}
	sort(v.begin() , v.end());
	
	cout << v[v.size() - 1].second << " " << v[v.size() - 1].first; 
	return 0;
}
