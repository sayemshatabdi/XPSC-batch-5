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
        sort(v.begin(),v.end());
        bool flag=true;
        int i=0, j=n-1;
        while(i!=n-1 && j>=0)
        {
            v[i]=v[i]+v[j];
            i++;
            j--;
        }
        for(int i=0;i<n;i++)
        {
            // if(v[i]!=v[i+1])
            // {
            //     flag=false;
            // }
            cout<<v[i]<<" ";
        }
        cout<<endl;
        // if(flag) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }
    return 0;
}