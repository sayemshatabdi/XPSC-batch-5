#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,x;
    cin>>n>>x;
    vector<long long int>ms(n);
    for(int i=0;i<n;i++)
    {
        cin>>ms[i];
    }
    for(long long int b:ms)
    {
        if(b!=x)
        {
            cout<<b<<" ";
        }
    }
    cout<<endl;
    return 0;
}