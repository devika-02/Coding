#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int num[n],i;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<n;i++)
    {   
        if(num[i]>0)
    {
        if(num[i]>=num[k-1])
        {
            count++;
        }
    }
        
    }
    cout<<count;
    return 0;
}
/*
8 5
10 9 8 7 7 7 5 5
*/
