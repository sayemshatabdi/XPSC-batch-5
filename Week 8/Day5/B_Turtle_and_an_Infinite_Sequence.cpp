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
        int n,m;
        cin>>n>>m;
        int l=max(0,(n-m));
        int r=n+m;
        long long ans=0;
        for(int k=0;k<=__lg(r);k++)
        {
            if ((l & (1LL << k)) || (r & (1LL << k)) || (l >> (k + 1)) != (r >> (k + 1))) 
            {
			ans |= (1LL << k);
		    }
        }
        cout<<ans<<endl;
    }
    return 0;
}