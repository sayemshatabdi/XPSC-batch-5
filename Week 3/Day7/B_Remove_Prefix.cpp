#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        reverse(v.begin(),v.end());
        map<int,int>mp;
        for(int val:v)
        {
            mp[val]++;
            if(mp[val]>1) break;
        }
        cout<<n-mp.size()<<endl;
    }
    return 0;
}