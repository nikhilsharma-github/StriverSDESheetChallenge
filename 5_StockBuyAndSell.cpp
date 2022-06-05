#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

 int stockBuyandSell(vector<int>& prices) {
        
        int maxProfit=0,minStockVal=prices[0];
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minStockVal)
                minStockVal=prices[i];
            
            
            maxProfit=max(maxProfit,prices[i]-minStockVal);
        }
        return maxProfit;
        
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
        cout<<stockBuyandSell(ip)<<endl;;

        // for (int v : ip)
        //     cout << v << " ";
        // cout << endl;
    }
    return 0;
}