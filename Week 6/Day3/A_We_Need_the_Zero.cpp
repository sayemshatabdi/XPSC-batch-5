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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            ans^=v[i];
        }
        if(n%2==0)
        {
            if(ans==0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}