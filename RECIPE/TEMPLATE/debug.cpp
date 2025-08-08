#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void Debug1DVector(vi vec)
{
    REP(i, vec.size())
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void Debug2DVector(vector<vi> vec)
{
    cout<<"  ";
    REP(i,vec.size()){
        cout<<i+1<<" ";
    }
    cout<<"\n";
    REP(i, vec.size())
    {
        cout << i+1 <<" ";
        REP(j, vec[i].size())
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main(){
    return 0;
}