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
        vector<int> v(n);
        long long sum=0,min_sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }  
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                min_sum+=2;
            }
            else
            {
                min_sum+=1;
            }
        }
        if(sum>=min_sum && n>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}