//Doubly Linked List (DLL) Implementation with unordered_map<int,pair<int,int>>
//Can be use when list value is INTEGER (if not int just change the data types)
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int nullpointer =-1;
// DLL ------------------------------------------------------------------------------------------------
unordered_map<int,pi> dll;
int head = 0;
int tail = 0;

void addTail(int value) {
    if (dll.empty()) {
        dll[value] = {0, 0};
        head = tail = value;
    } else {
        dll[tail].second = value; 
        dll[value] = {tail, 0};   
        tail = value;             
    }
}
//-----------------------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    

    return 0;
}