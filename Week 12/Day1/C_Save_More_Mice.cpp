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
        int k,n;
        cin>>k>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cat=0,cnt=0;
        while(cat<v[n-1])
        {
            cat+=(k-v[n-1]);
            cnt++;
            v.erase(v.end()-1);
            n--;
            if(n==0 || v.empty())
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}