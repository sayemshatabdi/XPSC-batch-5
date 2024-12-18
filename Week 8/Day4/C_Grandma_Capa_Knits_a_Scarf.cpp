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
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        vector<int>ans;
        for(auto [x,y]:mp)
        {
            int l=0,r=n-1,cnt=0;
            while(l<r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if(s[l]==x)
                    {
                        l++;
                        cnt++;
                    }
                    else if(s[r]==x)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        cnt=-1;
                        break;
                    }
                }
            }
            ans.push_back(cnt);
        }
       sort(ans.begin(),ans.end());
       bool flag=true;
       for(int i=0;i<ans.size();i++)
       {
            if(ans[i]!=-1)
            {
                cout<<ans[i]<<endl;
                flag=false;
                break;
            }
       }
       if(flag) cout<<"-1"<<endl;
    }
    return 0;
}