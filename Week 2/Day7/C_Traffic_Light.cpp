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
        char a;
        cin>>a;
        string s;
        cin>>s;
        s=s+s;
        int ans=INT_MIN;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {   
            if(s[i]==a)
            {
                cnt=0;
                while(s[i]!='g' && i<s.size())
                {
                    cnt++;
                    i++;
                }
                ans=max(cnt,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}