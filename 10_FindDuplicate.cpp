#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	int s=arr[0];
    int f=arr[0];
    
    do{
        s=arr[s];
        f=arr[arr[f]];
    }while(s!=f);
    
    f=arr[0];
    
    while(s!=f){
        s=arr[s];
        f=arr[f];
    }
    
    return s;
}
