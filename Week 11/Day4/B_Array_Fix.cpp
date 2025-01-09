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
        vector<int>a(n),b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<10) b.push_back(a[i]);
            else
            {
                int x=a[i]/10,y=a[i]%10;
                b.push_back(x);
                b.push_back(y);
            }
        }
        bool flag=true;
        for(int i=0;i<b.size()-1;i++)
        {
            if(b[i]>b[i+1]) flag=false;
        }
        // for(int val :b)
        // {
        //     cout<<val<<" ";
        // }
        // cout<<endl;
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}