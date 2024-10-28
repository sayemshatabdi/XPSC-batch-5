#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    if(s.size()==4) cout<<s;
    else if(s.size()==3) cout<<"0"<<s<<endl;
    else if(s.size()==2) cout<<"00"<<s<<endl;
    else if(s.size()==1) cout<<"000"<<s<<endl;
    else cout<<"0000"<<endl;
    return 0;
}