#include <bits/stdc++.h>
using namespace std;

void horizontal(vector<vector<int>> &mat)
{
    int size = mat.size();
    for (int i = 0; i < size / 2; i++)
    {
        swap(mat[i], mat[size - 1 - i]);
    }
}

void vertical(vector<vector<int>> &mat)
{
    int row = mat.size();
    int column = mat[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column / 2; j++)
        {
            swap(mat[i][j], mat[i][column - 1 - j]);
        }
    }
}

void rotate90(vector<vector<int>> &mat)
{
    int row = mat.size();
    int column = mat[0].size();
    vector<vector<int>> resu(column, vector<int>(row));
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            resu[i][j] = mat[row - 1 - j][i];
        }
    }
    mat = resu;
}
void rotate270(vector<vector<int>> &mat)
{
    int row = mat.size();
    int column = mat[0].size();
    vector<vector<int>> resu(column, vector<int>(row));
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            resu[i][j] = mat[j][column - 1 - i];
        }
    }
    mat = resu;
}
void rotate180(vector<vector<int>> &mat) {
    int row = mat.size();
    int col = mat[0].size();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int ni = row - 1 - i;
            int nj = col - 1 - j;
            if (i > ni || (i == ni && j >= nj)) continue;
            swap(mat[i][j], mat[ni][nj]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    string com = "";
    while (x--)
    {
        cin >> com;
        if (com == "90")
        {
            rotate90(mat);
        }
        else if (com == "180")
        {
            rotate180(mat);
        }
        else if (com == "270")
        {
            rotate270(mat);
        }
        else if (com == "_")
        {
            horizontal(mat);
        }
        else if (com == "|")
        {
            vertical(mat);
        }
    }
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}