//Effective Approach
//My first ever codeforces rating 1100 problem!
#include<bits/stdc++.h>
using namespace std;
int main()
{   long long n,m,i,j,x,y,cf=0,cl=0;int temp;
    vector <long> first,last;
    int a[100001];
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
      
        /*Store the indices
        x=i;
        y=n-i-1;
       
        first.push_back(x);
        last.push_back(y);*/
    }
    /*cout<<"The first order"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<first[i]<<endl;
    }
    cout<<"The last order"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<lasts[i]<<endl;
    }*/
    //Enter queries
    cin>>m;
    while(m>0)
    {   int search;
        cin>>search;
        for(i=0;i<n;i++)
        {
            if(a[i]==search)
            {   cf=cf+i+1;
                cl=cl+n-i;
               
               
            }
           
        }
       
        m--;
    }
      cout<<cf<<" "<<cl<<endl;
    return 0;
}
/*
3
3 1 2
3
1 2 3
*/