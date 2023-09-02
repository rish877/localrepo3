#include <bits/stdc++.h>

using namespace std;
void rotateMatrix(vector<vector<int>> &v, int n)
{
    // ----->transpose<-------

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    // reverse every row
    for (int i = 0; i < n; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    rotateMatrix(v, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}