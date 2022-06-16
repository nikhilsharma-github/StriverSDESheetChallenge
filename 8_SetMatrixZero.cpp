#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void setMatrixZero(vector<vector<int>> &matrix, int n, int m)
{
    vector<int> row(n, -1);
    vector<int> col(m, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
void setMatrixZero2(vector<vector<int>> &matrix)
{
int n = matrix.size();
    int m = matrix[0].size();

    bool colCheck = true;
    for (int r = 0; r < n; r++)
    {
        if (matrix[r][0] == 0)
        {
            colCheck = false;
      
        }
    }

    for (int r = 0; r < n; r++)
    {
        for (int c = 1; c < m; c++)
        {
            if (matrix[r][c] == 0)
            {
                matrix[r][0] = matrix[0][c] = 0;
            }
        }
    }
    for (int r = n - 1; r >= 0; r--)
    {
        for (int c = m - 1; c >= 1; c--)
        {
            if (matrix[r][0] == 0 || matrix[0][c]==0)
            {
                matrix[r][c] = 0;
            }
        }
    }

    if (colCheck == false)
    {
        for (int r = 0; r < n; r++)
        {
            matrix[r][0] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        long long n, m;
        cin >> n >> m;

        vector<vector<int>> ip;
        for (int i = 0; i < n; i++)
        {
            vector<int> t;
            int val = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> val;
                t.push_back(val);
            }
            ip.push_back(t);
        }

        // setMatrixZero(ip, n, m);
        setMatrixZero2(ip);

        cout << "Solution : " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ip[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}