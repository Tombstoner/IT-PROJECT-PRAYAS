#include <bits/stdc++.h>
#define ll int long long
using namespace std;

void solve(int arr[] , int n) {
    int lis[n]; // dp array stores the length of prev subsequences
    lis[0] = 1;
    
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] and lis[j] + 1 > lis[i])
                lis[i] = lis[j] + 1;
        }
    }
    for (auto i : lis) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[] = {50,3,10,7,40,80};
	solve(arr , 6);
	return 0;
}
