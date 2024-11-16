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
        string a,b;
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(a[0]>b[0])
        {
            cout<<"<"<<endl;
            
        }
        else if(a[0]<b[0])
        {
            cout<<">"<<endl;
        }
        else
        {
            if(a[0]=='S')
            {
                if(a.size()>b.size())
                {
                    cout<<"<"<<endl;
                }
                else if(a.size()<b.size())
                {
                    cout<<">"<<endl;
                }
                else
                {
                    cout<<"="<<endl;
                }
            }
            else
            {
                if(a.size()>b.size())
                {
                    cout<<">"<<endl;
                }
                else if(a.size()<b.size())
                {
                    cout<<"<"<<endl;
                }
                else
                {
                    cout<<"="<<endl;
                }
            }
            
        }
    }
    return 0;
}