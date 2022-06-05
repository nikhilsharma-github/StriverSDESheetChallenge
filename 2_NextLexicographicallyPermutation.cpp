#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void nextPermutation(vector<int> &nums)
{

    int n = nums.size();

    if (n == 1)
        return;

    int i = n - 2;
    for (i = n - 2; i >= 0; i--)
    {
        if (nums[i]<nums[i+1])
        {
            break;
        }
    }

    if (i == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    else
    {
        int spi = n-1;
        for (int j = n - 1; j > i; j--)
        {
            if (nums[j] > nums[i])
            {
                spi = j;
                break;
            }
        }

        swap(nums[i], nums[spi]);

        reverse(nums.begin() + i+1, nums.end());
        return;
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
        long long n, t = 0;
        cin >> n;
        vector<int> ip;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ip.push_back(t);
        }
        nextPermutation(ip);

        for (int v : ip)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}