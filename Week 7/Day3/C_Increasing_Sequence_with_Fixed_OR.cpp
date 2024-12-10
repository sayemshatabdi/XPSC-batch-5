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
        long long n;
        cin>>n;
        deque<long long>a;
        for(int k=0;k<=__lg(n);k++)
        {
            if((n>>k) & 1)
            {
                long long val = n-(1LL<<k);
                if(val>0)
                {
                    a.push_front(val);
                }
            }
        }
        a.push_back(n);
        cout<<a.size()<<endl;
        for(int val:a)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}