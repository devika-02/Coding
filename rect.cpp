#include<bits/stdc++.h>
using namespace std;
//PRACTICE WITH FUNCTIONS
bool checRect(int a,int b,int c){

int t=0;
if((a==b&&c%2==0)||(b==c&&a%2==0)||(c==a&&b%2==0)){
    t=1;
}
/*
if(||)

*/
if(a+b==c||a+c==b||c+b==a||t==1)
{
    return true;
}
else if(t==1){
    return true;
}
return false;
}
int main(){
    int t;
    cin>>t;
    int l1,l2,l3;
    while(t>0)
    {
    cin>>l1>>l2>>l3;
    if(!checRect(l1,l2,l3)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
        t--;
    }
    return 0;
}