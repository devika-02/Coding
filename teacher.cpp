#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cout<<"Enter queries:";
    int q;
    cin>>q;
    unordered_map<string,int>m;
        int type,marks;
        string name;
        for(int i=0;i<q;i++){
        cout<<"Enter type:";
        cin>>type;
        if(type==1){
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter marks:";
            cin>>marks;
            if(m.find(name)==m.end()){
                cout<<"Key not found entered\n";
                m.insert(make_pair(name,marks));
            }
            else{
                m[name]+=marks;
            }
            
        }
        else if(type==2){
            cout<<"Enter name whose marks you wanna erase:";
            cin>>name;
             if(m.find(name)!=m.end()){
                
                m[name]=0;
            }
            else{

                cout<<"Key not found doesnt exist\n";
            }
             
        }
        else if(type==3){
            cout<<"Enter name:";
            cin>>name;
            cout<<m[name]<<endl;
        }
        else{
            cout<<"ERROR INVALID OPTION";
            exit(0);
        }
        }
          return 0;
            }