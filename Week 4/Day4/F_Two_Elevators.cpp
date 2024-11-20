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
        long long a,b,c;
        cin>>a>>b>>c;
        if(a<b)
        {
            cout<<"1"<<endl;
        }
        else if(a>b)
        {
            if(b>=c)
            {
                cout<<"2"<<endl;
            }
            else
            {
                if(a<(abs(b-c)+c))
                {
                    cout<<"1"<<endl;
                }
                else if(a==(abs(b-c)+c))
                {
                    cout<<"3"<<endl;
                }
                else
                {
                    cout<<"2"<<endl;
                }
            }
        }
        else if(a==b)
        {
            if(b>=c)
            {
                cout<<"3"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }

    }
    return 0;
}