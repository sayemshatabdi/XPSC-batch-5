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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=0;
        if(v[0]==0)
        {
            for(int i=1;i<n-1;i++)
            {
                if(v[i]==0 && v[i-1]!=0)
                {
                    v[i]++;
                    v[i-1]--;
                    ans++;
                }
            }
            for(int i=1;i<n-1;i++)
            {
                ans+=v[i];
            }
            cout<<ans<<endl;
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(v[i]==0 && v[i-1]!=0)
                {
                    v[i]++;
                    v[i-1]--;
                    ans++;
                }
            }
            for(int i=0;i<n-1;i++)
            {
                ans+=v[i];
            }
            cout<<ans<<endl;
        }

        
    }
    return 0;
}