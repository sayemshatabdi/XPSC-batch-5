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
        for(int i=0;i<n;i++)
        {
            int b=i^n;
            if(i<=b && b<=n)
            {
                cout<<i<<" "<<b<<endl;
                break;
            }
        }
    }
    return 0;
}