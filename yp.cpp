#include<bits/stdc++.h>
using namespace std;
void vecsum(){
    
   
}
int main()
{
   int n;
   //n is number of forces;
   cin>>n;
   int a[n][3],i,j,xs=0,ys=0,zs=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<3;j++)
       {
           cin>>a[i][j];
       }
   }
  
       for(i=0;i<n;i++)
       {
           xs=xs+a[i][0];
          // cout<<xs;
           ys=ys+a[i][1];
           zs=zs+a[i][2];
           
       }
       //cout<<xs<<ys<<zs;
     if(xs==0&ys==0&zs==0)
       {
           cout<<"YES";
       }
       else{
           cout<<"NO";
       }
   
   return 0; 
}