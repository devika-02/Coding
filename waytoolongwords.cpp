#include <bits/stdc++.h>
//WAY TOO LONG NAMES
using namespace std;
#define ll long long
 
 
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        if (s.length()>10)
        {
            cout<<s[0]+to_string(s.length()-2)+s[s.length()-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
        
    }
    
    
    
}

