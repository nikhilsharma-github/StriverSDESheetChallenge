#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n)
{
    //To print individual items, do nCr where n=row-1 and r=col-1. where n!/r!(n-r)! and calculate factorial using DP factorial approach.

    // cout << "for value : " << n << endl;
    vector<vector<long long int>> ans;
    vector<long long int> ov;

    for (int i = 1; i <= n; i++)
    {
        vector<long long int> iv;
        if (i == 1)
        {
            iv.push_back(1);
            ans.push_back(iv);
        }
        else if (i == 2)
        {
            iv.push_back(1);
            iv.push_back(1);
            ans.push_back(iv);
        }
        else
        {
            iv.push_back(1);
            for (long long int j = 1; j < ov.size(); j++)
            {
                long long int val = (long long int)(ov[j] + ov[j - 1]);
                iv.push_back(val);
                // cout << ov[j] << " ";
            }
            // cout << endl;
            iv.push_back(1);
            ans.push_back(iv);
        }
        ov = iv;
    }

    return ans;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<long long int>> ans = printPascal(n);

        for (vector<long long int> v : ans)
        {
            for (int val : v)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
}