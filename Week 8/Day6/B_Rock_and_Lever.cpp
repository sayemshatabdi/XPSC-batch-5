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
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            int msb=__lg(v[i]);
            mp[msb].push_back(v[i]);
        }
        int sum=0;
        for(auto[x,y]:mp)
        {
            int sz=y.size()-1;
            sum=sum + (sz*(sz+1))/2;
        }
        cout<<sum<<endl;
    }   
    return 0;
}