#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    int ans=0;
    if(n>=m)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=n;i<=m;i++)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}