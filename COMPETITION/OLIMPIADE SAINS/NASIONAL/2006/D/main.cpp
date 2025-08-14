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

    for (int i = 0; i < r; i++)
    {
        cin >> board[i];
    }

    int tupctr = 1;
    while (tupctr)
    {
        tupctr = 0;
        int maxi = 0;

        for (int i = 0; i < r; i++)
        {
            if (board[i] == full)
            {
                tupctr = 1;
                board[i] = empty;
                maxi = max(i, maxi);
            }
        }

        if (tupctr)
        {
            for (int i = 0; i < c; i++)
            {
                for (int j = maxi - 1; j >= 0; j--)
                {
                    if (board[j][i] == '1')
                    {
                        int top = j;
                        while (top + 1 < r && board[top + 1][i] == '0')
                        {
                            top++;
                        }
                        if (top != j)
                        {
                            board[top][i] = '1';
                            board[j][i] = '0';
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        cout << board[i] << "\n";
    }
}
