#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main() {
    int n;
    int t;
    cin >> n;
    vector<int> v(n , 0);
    cin >> v[0];
    for (int i = 1; i < n; i++) {
        int temp;
        cin >> temp;
        v[i] = v[i - 1] + temp;
    }
    cin >> t;
    while (t--) {
        int start , end;
        cin >> start >> end;
        if (v[start - 1] == *(v.rbegin())) 
            cout << v[end] << "\n";
        else
            cout << v[end] - v[start - 1] << '\n';
    }
}
