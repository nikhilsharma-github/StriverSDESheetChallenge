#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

// bool comp(pair<int,int> a,pair<int,int> b){
//     return a.first<b.first;
// }

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &ip)
{
    sort(ip.begin(), ip.end());
    if (ip.size() <= 1)
        return ip;

    vector<vector<int>> ans;
    stack<pair<int,int>> s;
    s.push({ip[0][0],ip[0][1]});

    // vector<int> k=*(ip.begin());

    // ans.push_back(k);

    for (int i=1;i<ip.size();i++)
    {
        // vector<int> lastValInAnsVec=*(ans.end());

        // if (lastValInAnsVec[1] >= ip[i][0])
        // {
        //    lastValInAnsVec[1] = max(lastValInAnsVec[1], ip[i][0]);
        // }
        //    ans.push_back(ip[i]);
    
        if(s.top().second>=ip[i][0]){
            s.top().second = max(ip[i][0],s.top().second);
        }
        else{
            s.push({ip[i][0],ip[i][1]});
        }
    }

    while(s.size()){
        vector<int> k;
        k.push_back(s.top().first);
        k.push_back(s.top().first);
        ans.push_back(k);
        s.pop();
    }
    return ans;
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
        long long n;
        cin >> n;

        vector<vector<int>> ip;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            vector<int> p;

            p.push_back(val);
            cin >> val;
            p.push_back(val);
            ip.push_back(p);
        }

        vector<vector<int>> ans = mergeOverlappingIntervals(ip);

        for (vector<int> p : ans)
        {
            cout << p[0] << " " << p[1] << endl;
        }
    }
    return 0;
}