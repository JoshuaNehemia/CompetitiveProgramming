#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr(8);
    iota(arr.begin(), arr.end(), 1); // arr = {1,2,3,4,5,6,7,8}

    string r;
    vector<int> candidates = arr;

    while (candidates.size() > 1) {
        int mid = candidates.size() / 2;
        vector<int> left(candidates.begin(), candidates.begin() + mid);
        vector<int> right(candidates.begin() + mid, candidates.end());

        cout << "?\n";
        for (int x : left) cout << x << " ";
        cout << "\n";
        for (int x : right) cout << x << " ";
        cout << "\n";
        cout << flush;

        cin >> r;
        if (r == "KIRI") {
            candidates = left;
        } else {
            candidates = right;
        }
    }

    cout << "! " << candidates[0] << "\n" << flush;
    return 0;
}