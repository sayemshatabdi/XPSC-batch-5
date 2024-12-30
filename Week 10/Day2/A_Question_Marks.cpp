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
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<4*n;i++)
        {
            if(s[i]!='?')
            {
                mp[s[i]]++;
            }
        }
        int ans=0;
        for(auto [x,y]:mp)
        {
            ans+=min(y,n);
        }
        cout<<ans<<endl;
    }
    return 0;
}