#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void missingAndRepeating(vector<long long> A)
{
    int n = A.size();
    long long int len = n;

    long long int S = (len * (len + 1)) / 2;
    long long int P = (len * (len + 1) * (2 * len + 1)) / 6;
    long long int mn = 0, rn = 0;

    for (int i = 0; i < n; i++)
    {
        S -= (long long int)A[i];
        P -= (long long int)A[i] * (long long int)A[i];
    }

    mn = (S + P / S) / 2;

    rn = mn - S;
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
        long long n, t;
        vector<long long> ip;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ip.push_back(t);
        }
        missingAndRepeating(ip);
    }
    return 0;
}