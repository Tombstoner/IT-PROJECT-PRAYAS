#include <bits/stdc++.h>
using namespace std;

string solve(char a) {
    if (a == 'B' || a == 'b')
        return "BattleShip";
    else if (a == 'D' || a == 'd') 
        return "Destroyer";
    else if (a == 'C' || a == 'c') 
        return "Cruiser";
    else if (a == 'F' || a == 'f') 
        return "Frigate";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t --) {
	    char s;
	    cin >> s;
	    cout << solve(s) << "\n";
	}
	return 0;
}
