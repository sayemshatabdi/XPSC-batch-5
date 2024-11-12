#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<string>v;
    while(n--)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    map<string,int>mp;
    for(auto a:v)
    {
        mp[a]++;
        if(mp[a]==1)
        {
            cout<<a[a.size()-2]<<a[a.size()-1];
        }
    }
    return 0;
}