#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        deque<pair<char,long long int>>up;
        deque<pair<char,long long int>>down;
        for(long long int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(s[i]=='b')
                {
                    if(!down.empty())
                    {
                        down.pop_back();
                    }
                    
                }
                else
                {
                    down.push_back({s[i],i});
                }
            }
            else
            {
                if(s[i]=='B')
                {
                    if(!up.empty())
                    {
                        up.pop_back();
                    }
                    
                }
                else
                {
                    up.push_back({s[i],i});
                }
            }
        }
        vector<char>ans(1000000);
        for(auto[x,y] :up)
        {
            // cout<<x<<" "<<y<<endl;
            ans[y]=x;
        }
        for(auto[x,y] :down)
        {
            // cout<<x<<" "<<y<<endl;
            ans[y]=x;
        }
        for(char x: ans)
        {
            if(x!= 0) cout<<x;
        }
        cout<<endl;
    }
    
    return 0;
}