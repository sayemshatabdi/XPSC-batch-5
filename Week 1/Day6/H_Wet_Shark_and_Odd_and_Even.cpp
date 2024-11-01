#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    long long int even,odd,total_sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        total_sum+=v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }
    sort(v.begin(),v.end());
    if(total_sum%2==0) 
    {
        cout<<total_sum<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(v[i]%2!=0)
            {
                total_sum-=v[i];
                break;
            }
        }
        cout<<total_sum;
    }
    return 0;
}