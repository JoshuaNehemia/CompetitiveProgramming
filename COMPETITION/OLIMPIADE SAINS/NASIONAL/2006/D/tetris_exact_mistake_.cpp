// This one falling like tetris (Where line stay intact not falling like 'sand')
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;

    vector<string> board(r);
    string full = "";
    string empty = "";
    for (int i = 0; i < c; i++)
    {
        full = full + "1";
        empty = empty + "0";
    }

    int ctr = 0;
    for (int i = 0; i < r; i++)
    {
        cin >> board[i];
        if (board[i] == full)
        {
            board[i] = "";
            ctr++;
        }
    }
    for (int i = 0; i < ctr; i++)
    {
        cout << empty << "\n";
    }
    for (int i = 0; i < r; i++)
    {
        if (board[i] != "")
        {
            cout << board[i] << "\n";
        }
    }
}
