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
        long long n;
        cin>>n;
        vector<long long>v(n);
        priority_queue<long long>pq;
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>0) pq.push(v[i]);
            else
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
        }
        
        
        cout<<ans<<endl;
    }
    return 0;
}