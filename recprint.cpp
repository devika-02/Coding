// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void printPattern(int n,int flag,int ref){
    cout<<n<<"\t";
    if(n==ref&&flag==1){
        
        return;
    }
  
    if(n<=0){
            flag=1;
        }
    if(n>=0&&flag==0){
    printPattern(n-5,flag,ref);
      
    }
    if(flag==1){
        printPattern(n+5,flag,ref);
    }
    
        
}
int main() {
    // Write C++ code here
    printPattern(16,0,16);
    //n, n-5, n-10, …, 0, 5, 10, …, n-5, n
    return 0;
}