#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int a, b, c, d;
    int ans = 0;
    cin >> a >> b >> c >> d;
    if (b)
    {
        ans += (int)ceil((double)(a) / 3);
        if (c){
            ans += (int)ceil((double)(b + c) / 3) + (int)ceil((double)(d) / 3);
        }
        else{
            ans += (int)ceil((double)(b + d) / 3);
        }
    }
    else
    {
        if (c)
        {
            ans += (int)ceil((double)(a + c) / 3) + (int)ceil((double)(d) / 3);
        }
        else
        {
            ans += (int)ceil((double)(a + d) / 3);
        }
    }

    cout << ans;
    return 0;
}
