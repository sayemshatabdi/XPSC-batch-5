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
        int mx=v[0],mn=v[0];
        for(int k=1;k<n;k++)
        {
            mx=mx|v[k];
            mn=mn&v[k];
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}