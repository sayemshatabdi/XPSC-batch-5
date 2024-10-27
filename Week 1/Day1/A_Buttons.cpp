#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    int ans1=a+a-1;
    int ans2=b+b-1;
    int ans3=a+b;
    if (ans1 >= ans2 && ans1 >= ans3) 
    {
        cout << ans1 << endl;    
    } 
    else if (ans2 >= ans1 && ans2 >= ans3) 
    {    
        cout <<ans2 << endl;
    }
    else 
    {
        cout << ans3 << endl;
    }
    return 0;
}