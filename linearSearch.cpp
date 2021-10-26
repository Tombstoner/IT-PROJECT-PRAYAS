#include <bits/stdc++.h>

using namespace std;

void linearSearch(vector<int> v , int searchElement) {
    int left = 0;
    int right = v.size() - 1;
    int position = -1;
    int length = v.size() - 1;
    
    while (left <= right) {
        if (v[left] == searchElement) {
            position = left;
            cout << "The element was found at positon : " << position + 1 << "\n";
            break;
        }
        
        if (v[right] == searchElement) {
            position = right;
            cout << "The element was found at position : " << position + 1 << "\n";
            break;
        }
        cout << "pass happened bruv , u too slow with those bead balls ---->" << endl;
        left ++;
        right --;
    }
    
    if (position == -1)
        cout << "The element does not exist in the given vector.";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector <int> arr;
    int n;
    cin >> n;
    int searchElement;
    cin >> searchElement;
    
    for (int i = 0; i < n; i ++) {
        int inp;
        cin >> inp;
        arr.push_back(inp);
    }
    
    linearSearch(arr , searchElement);
    
    return 0;
}
