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
        int ans=0;
        if(n==1)
        {
            cout<<1<<endl<<"1 2"<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<n/2<<endl;
                int l=1,r=3*n;
                for(int i=0;i<n/2;i++)
                {
                    while(l<r)
                    {
                        cout<<l<<" "<<r<<" ";
                        l+=3;
                        r-=3;
                        break;
                    }
                }
            }
            else
            {
                cout<<n/2+1<<endl;
                int l=1,r=3*n;
                for(int i=0;i<(n/2)+1;i++)
                {
                    while(l<r)
                    {
                        cout<<l<<" "<<r<<" ";
                        l+=3;
                        r-=3;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}