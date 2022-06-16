#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void mergeArrays2(vector<int> &a,vector<int> &b){
    int gap=a.size()+b.size();
    if(gap%2!=0){
        gap=gap+1;
    }

    while(gap>=1){
        int ptr=0;
        
    }
}

void mergeArrays(vector<int> &a,vector<int> &b){

	int aptr=a.size()-1,bptr=b.size()-1,index=a.size()+b.size()-1;
    // int aptr=m-1,bptr=n-1,index=m+n-1;
  
    while(aptr>=0&&bptr>=0){
        if(a[aptr]<b[bptr]){
            a[index]=b[bptr];
            index--,bptr--;
        }
        else{
            a[index]=a[aptr];
            index--,aptr--;
        }
    }
    
    while(bptr>=0){
            a[index]=b[bptr];
            index--,bptr--;
    }
    
    // return a;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        cout<<"Testcase : "<<test+1<<endl;
        long long n,m;
        cin >> n>>m;

        int t=0;
        vector<int> a(n+m);
        vector<int> b(m);
        for(int i=0;i<n;i++){
            cin>>t;
            // a.push_back(t);
            a[i]=t;
        }
        for(int i=0;i<m;i++){
            cin>>t;
            // b.push_back(t);
            b[i]=t;
        }

        mergeArrays(a,b);
        mergeArrays2(a,b);






    }
    return 0;
}