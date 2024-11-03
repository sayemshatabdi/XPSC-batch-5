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
        string s,r;
        cin>>s;
        set<char>x;
        map<char,char>mp;
        for(int i=0;i<n;i++)
        {
            x.insert(s[i]);
        }
        for(auto a :x)
        {
            r+=a;
        }
        int sz=r.size()-1;
        for(int i=0;i<r.size();i++)
        {
            mp[r[i]]=r[sz-i];
        }
        for(int i=0;i<n;i++)
        {
            s[i]=mp[s[i]];
        }
        cout<<s<<endl;
    }
    return 0;
}