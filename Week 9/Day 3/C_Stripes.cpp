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
        string s[8];
        int n=8;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        char c='.';
 
        for(int i=0;i<n;i++)
        {
            if(count(s[i].begin(),s[i].end(),'R')==n){
                c='R';
                break;
            }
        }
 
        if(c=='.')
        {
            for(int j=n-1;j>=0;j--)
            {
                bool bug=false;
                for(int i=0;i<n;i++)
                {
                    if(s[i][j]!='B')
                    {
                        bug=true;
                        break;
                    }
                }
                if(!bug)
                {
                    c='B';
                    break;
                }
            }
        }
 
        cout<<c<<endl;
    }
    return 0;
}