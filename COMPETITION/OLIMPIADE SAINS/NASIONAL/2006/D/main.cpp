#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;

    vector<vector<int>> board(r, vector<int>(c));
    for (auto &row : board)
        for (int &cell : row)
            cin >> cell;

    int writeRow = r - 1; 
    for (int i = r - 1; i >= 0; --i) {
        if (count(board[i].begin(), board[i].end(), 1) != c) {
            board[writeRow--] = move(board[i]);
        }
    }

    for (int i = writeRow; i >= 0; --i) {
        fill(board[i].begin(), board[i].end(), 0);
    }

    for (const auto &row : board) {
        for (int cell : row)
            cout << cell;
        cout << '\n';
    }
}
