#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin>>t;
    while(t--)
    {
        // long long n;
        // cin>>n;
        // vector<long long>v;
        // set<long long>s;
        // for(long long i=0;i<n;i++)
        // {
        //     long long x;
        //     cin>>x;
        //     s.insert(x);
        // }
        // for(long long a:s)
        // {
        //     v.push_back(a);
        // }
        // long long ans=0;
        // for(long long i=0;i<n;i++)
        // {
        //     long long it=(lower_bound(v.begin(),v.end(),v[i]+n)-v.begin())-i;
        //     ans=max(ans,it);
        // }
        // cout<<ans<<endl;
        

        long long n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        set<long long>st;
        for(int i=0;i<n;i++)
        {
            st.insert(v[i]);
        }
        vector <long long> vl;
        for(auto &i: st)
        {
            vl.push_back(i);
        }
        long long ans=0;
        for(int i=0;i<vl.size();i++)
        {
            auto it=lower_bound(vl.begin(),vl.end(),vl[i]+n);
            long long d=it-vl.begin()-i;
            ans=max(ans,d);
        }

        cout<<ans<<endl;
    }
    return 0;
}