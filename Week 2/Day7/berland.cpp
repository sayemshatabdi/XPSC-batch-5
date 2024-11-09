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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        int cnt = count(s.begin(),s.end(),'1'); 
        int bad = n - cnt;
        set<int>s1;
        set<int>s2;
        for(int i=1;i<=bad;i++)
        {
            s1.insert(i);
        }
        for(int i=1;i<=cnt;i++)
        {
            s2.insert(n-i+1);
        }

        for(int i=0;i<n;i++)
        {
            int now = a[i];
            if(s[i]=='0')
            {
                auto it=s1.lower_bound(now);
                if(it==s1.end())
                {
                    it--;
                }
                auto it2 = it;
                auto it3 = it;
                int d = 1e9;
                int val = -1;
                for(int i=0;i<2;i++)
                {
                    int xd = *it2;
                    if(d > abs(now - xd))
                    {
                        d = abs(now - xd);
                        val = xd;
                    }
                    if(it2==s1.begin())
                        break;
                    it2--;
                }
                for(int i=0;i<3;i++)
                {
                    if(it3==s1.end())
                        break;
                    int xd = *it3;
                    if(d > abs(now - xd))
                    {
                        d = abs(now - xd);
                        val = xd;
                    }
                    it3++;
                }
                cout<<val<<" ";
                s1.erase(val);
                
    
            }
            else{
                auto it = s2.lower_bound(now);
                if(it==s2.end())
                {
                    it--;
                }
                auto it2 = it;
                auto it3 = it;
                int d = 1e9;
                int val = -1;
                for(int i=0;i<2;i++)
                {
                    int xd = *it2;
                    if(d > abs(now - xd))
                    {
                        d = abs(now - xd);
                        val = xd;
                    }
                    if(it2==s2.begin())
                        break;
                    it2--;
                }
                for(int i=0;i<3;i++)
                {
                    if(it3==s2.end())
                        break;
                    int xd = *it3;
                    if(d > abs(now - xd))
                    {
                        d = abs(now - xd);
                        val = xd;
                    }
                    it3++;
                }
                cout<<val<<" ";
                s2.erase(val);
                
            }
        }
        cout<<"\n";
    }
    return 0;
}