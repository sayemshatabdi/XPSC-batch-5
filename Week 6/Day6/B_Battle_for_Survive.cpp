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
        if(n==2)
        {
            cout<<v[1]-v[0]<<endl;
        }
        else
        {
            for(int i=0;i<n-2;i++)
            {
                v[n-2]-=v[i];
            }
            cout<<v[n-1]-v[n-2]<<endl;
        }
    }
    return 0;
}