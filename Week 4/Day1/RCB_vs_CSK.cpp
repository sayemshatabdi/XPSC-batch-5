#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r,c;
    cin>>r>>c;
    if(r-c>=18)
    {
        cout<<"RCB"<<endl;
    }
    else
    {
        cout<<"CSK"<<endl;
    }
    return 0;
}