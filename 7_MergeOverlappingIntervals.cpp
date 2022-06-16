#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

// bool comp(pair<int,int> a,pair<int,int> b){
//     return a.first<b.first;
// }

void display(vector<vector<int>> &ip){

        cout<<"Current values in ans : "<<endl;
       for(int i=0;i<ip.size();i++){
            cout<<ip[i][0]<<" "<<ip[i][1]<<endl;
        }
}

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &ip)
{
    sort(ip.begin(), ip.end());
    if (ip.size() <= 1)
        return ip;

    vector<int> k;
    k.push_back(ip[0][0]);
    k.push_back(ip[0][1]);

    vector<vector<int>> ans;
    ans.push_back(k);

    for (int i=1;i<ip.size();i++)
    {
        // cout<<"Last interval : "<<ans[ans.size()-1][0]<<" "<<ans[ans.size()-1][1]<<endl;
        // cout<<"Current interval : "<<ip[i][0]<<" "<<ip[i][1]<<endl;
        if(ans[ans.size()-1][1]>=ip[i][0]){
            
            ans[ans.size()-1][1]=max(ans[ans.size()-1][1],ip[i][0]);
        }
        else{
            vector<int> r=ip[i];
            ans.push_back(r);
        }

        // display(ans);
        
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
            vector<int> p;
            int val;
            cin >> val;
            p.push_back(val);
            cin >> val;
            p.push_back(val);
            ip.push_back(p);
        }

        vector<vector<int>> ans = mergeOverlappingIntervals(ip);

        for(int i=0;i<n;i++){
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }
    }
    return 0;
}