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
        map<char,int>mp;
        for(char i='a';i<='z';i++)
        {
            mp[i]=0;
        }
        vector<int>v(n);
        string ans;
        char c='a';
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            for(auto [x,y] : mp)
            {
                if(y==v[i])
                {
                    ans.push_back(x);
                    mp[x]++;
                    break;
                }
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}