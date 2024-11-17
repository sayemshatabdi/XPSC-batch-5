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
        int a,b;
        cin>>a>>b;
        if(a%3==0 && b%3==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int ans=max(a,b)%3;
            cout<<ans<<endl;
        }
    }
    return 0;
}