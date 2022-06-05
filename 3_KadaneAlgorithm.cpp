#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

long long kadaneAlgorithm(vector<int> &arr,int n){
     long long maxSoFar=0;
    long long currMax=0;
    
    for(int i=0;i<n;i++){
        
        currMax=currMax+arr[i];
        
        if(currMax>maxSoFar){
            maxSoFar=currMax;
        }
        
        if(currMax<0)
            currMax=0;
        
        
        if(maxSoFar<=currMax){
            maxSoFar=currMax;
        }
        
    }
    
    return maxSoFar;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n,t;
        cin >> n;
        vector<int> ip;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ip.push_back(t);
        }
        cout<<kadaneAlgorithm(ip,n)<<endl;

        
    }
    return 0;
}