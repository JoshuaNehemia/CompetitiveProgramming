#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll B, C, D;
    cin >> B >> C >> D;

    ll e = C - D; 
    if (e < 0) { 
        cout << 0; 
        return 0; 
    }

    vector<ll> factors;
    for (ll i = 1; i * i <= e; i++) {
        if (e % i == 0) {
            factors.push_back(i);
            if (i != e / i) 
                factors.push_back(e / i);
        }
    }

    ll count = 0;
    for (ll f : factors) {
        if (f > D && f <= B) { 
            count++;
        }
    }

    if (C == D) {
        count = max(0LL, B - C);
    }

    cout << count;
    return 0;
}