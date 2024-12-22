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
        string s;
        cin>>s;
        int n=s.size();
        int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        int ans=0;
    
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && cnt0>0)
            {
                cnt0--;
            }
            else if(s[i]=='0' && cnt1>0)
            {
                cnt1--;
            }
            else if(cnt0==0 || cnt1==0)
            {
                ans=n-i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

