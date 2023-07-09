// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void print(vector<int> a){
    cout<<endl;
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
vector<int> intersection(vector<int> a,vector<int> b){
    vector<int> c;
    int m=a.size();
    int n=b.size();
    for(int i=0;i<n;i++){
        if(find(a.begin(),a.end(),b[i])!=a.end()
        &&   find(c.begin(),c.end(),b[i])==c.end()){
            c.push_back(b[i]);
        }
    }
    return c;
}

int main() {
    // Write C++ code here
    vector<int> a={1,2,3,4,5,6,2};
    vector<int> b={2,3,3,1};
    print(a);
    print(b);
    print(intersection(a,b));
    
    return 0;
}