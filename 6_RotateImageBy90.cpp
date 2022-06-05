#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void rotateMatrixBy90(vector<vector<int>> &ip)
{
    // Doing transpose
    int n = ip.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(ip[i][j], ip[j][i]);
        }
    }

    for (int c = 0; c < n / 2; c++)
    {
        for (int r = 0; r < n; r++)
        {
            swap(ip[r][c], ip[r][n - 1 - c]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> ip = {{3, 6, 9},
                              {2, 5, 8},
                              {1, 4, 7}};

    rotateMatrixBy90(ip);

    for (vector<int> k : ip)
    {
        for (int v : k)
        {
            cout << v << " ";
        }

        cout << endl;
    }
    return 0;
}