//CREATING WORD ABBREVATIONS
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    bool a[3];int count,primecount=0;
    int n;
    cin>>n;
    while(n>0)
    {
         count=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            count++;
        }
    }
    if(count>=2)
    {
        primecount++;
    }
   
        n--;
    }
    cout<<primecount;
   
    
    return 0;
}
