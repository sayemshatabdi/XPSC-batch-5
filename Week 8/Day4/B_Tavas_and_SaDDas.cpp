#include<bits/stdc++.h>
using namespace std;
const int mx=10;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<long long>v;
    
    for(int i=1;i<=mx;i++)
    {
        for(int mask=0;mask<(1LL<<i);mask++)
        {
            string a;
            for(int k=0;k<i;k++)
            {
                if((mask>>k)&1)
                {
                    a+='7';
                }
                else
                {
                    a+='4';
                }
            }
            v.push_back(stoll(a));
        }
    }
    
    sort(v.begin(),v.end());
    auto it=find(v.begin(),v.end(),n);
    int dis=distance(v.begin(),it)+1;
    cout<<dis<<endl;
    return 0;
}