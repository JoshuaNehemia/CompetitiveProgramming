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

int nullpointer = -1;
// DLL ------------------------------------------------------------------------------------------------
unordered_map<int, pi> dll;
int head = 0;
int tail = 0;

void printDLL()
{
    int size = dll.size();
    int next = head;
    cout << size << "\n";
    while (next != nullpointer)
    {
        cout << next << " ";
        next = dll[next].S;
    }
    cout << "\n";
}

void addTail(int value)
{
    if (dll.empty())
    {
        dll[value] = make_pair(nullpointer, nullpointer);
        head = tail = value;
    }
    else
    {
        dll[tail].S = value;
        dll[value] = make_pair(tail, nullpointer);
        tail = value;
    }
}

void addHead(int value)
{
    if (dll.empty())
    {
        dll[value] = make_pair(nullpointer, nullpointer);
        head = tail = value;
    }
    else
    {
        dll[head].F = value;
        dll[value] = make_pair(nullpointer, head);
        head = value;
    }
}

void shuffle(int value){
    if(dll.find(value) == dll.end()) return;
    if(value == head) return;

    dll[head].F = tail;
    dll[tail].S = head;

    tail = dll[value].F;
    dll[tail].S = nullpointer;

    dll[value].F = nullpointer;
    head = value;
}

//-----------------------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n, p,v;
    cin >> n>>p;
    char c;
    while (n--)
    {
        cin >> v;
        addTail(v);
    }
    while(p--){
        cin >>c >> v;
        if(c=='G') shuffle(v);
        if(c=='A') addHead(v);
    }
    printDLL();
    return 0;
}