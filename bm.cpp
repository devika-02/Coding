//Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool a[5][5];
    int i,j,cnt=0;
    //Indexing is done according to the question
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    //Access the indices wherein one is present
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(a[i][j]==1)
            {
               //cout<<i<<j<<endl;
                cnt=abs(i-3)+abs(j-3);
            }
            
        }
    }
    cout<<endl<<cnt;

    return 0;
}