#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void sort012(vector<int> &ip)
{

    int left = 0, mid = 0, right = ip.size() - 1;

    while (mid <= right)
    {

        if (ip[mid] == 0)
        {
            swap(ip[mid], ip[left]);
            mid++, left++;
        }
        else if(ip[mid]==1){
            mid++;
        }
        else if(ip[mid]==2){
            swap(ip[mid],ip[right]);
            right--;
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
        long long n, t;
        cin >> n;
        vector<int> ip;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ip.push_back(t);
        }
        sort012(ip);

        for (int v : ip)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}