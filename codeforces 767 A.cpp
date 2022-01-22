#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
	    int n , k;
	    cin >> n >> k;
	    vector<int> temp(n) , perma(n);
	    vector<pair <int,int> > temp_perma(n);
	    for (int i = 0; i < n; i++) {
	        cin >> temp[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> perma[i];
	    }
	    for (int i = 0; i < n; i++) {
	        temp_perma[i] = make_pair(temp[i] , perma[i]);
	    }
	    sort(temp_perma.begin() , temp_perma.end());
	    int curr_mem = k;
	    int i = 0;
	   // for (auto i : temp_perma) {
	   //     cout << i.first << " " << i.second << endl;
	   // }
	    while(curr_mem >= temp_perma[i].first) {
	        curr_mem += temp_perma[i].second;
	       // cout << curr_mem <<endl;
	        i ++;
	    }
	    cout << curr_mem << "\n";
	}
	return 0;
}
