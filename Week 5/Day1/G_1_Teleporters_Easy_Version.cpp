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
        long long n,c;
        cin>>n>>c;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v[i]=v[i]+i+1;
        }
        
        sort(v.begin(),v.end());

        long long sum=0,ans;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(sum>c)
            {
                ans=i;
                flag=true;
                break;
            }
        }
        if(flag) cout<<ans<<endl;
        else cout<<n<<endl;
    }
    return 0;
}