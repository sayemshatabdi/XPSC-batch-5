#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v(n),pre;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(i==0)
        {
            pre.push_back(v[i]);
        }
        else
        {
            pre.push_back(v[i]+pre[i-1]);
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        auto it=lower_bound(pre.begin(),pre.end(),a);
        cout<<it-pre.begin()+1<<"\n";
    }
    return 0;
}