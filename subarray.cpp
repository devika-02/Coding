// 2104. Sum of Subarray Ranges
//Done on a different code editor using void function
#include <iostream>
#include <climits>
using namespace std;
void printSubset(int arr[],int i,int j,int size,int &sum){
    if(i>size){
        return;
    }
    if(j>size){
        i=i+1;
        j=i;
        printSubset(arr,i,j+1,size,sum);
         return;
    }
     cout<<"[";
     int max=INT_MIN;
     int min=INT_MAX;
    for(int it=i;it<j;it++){
        if(arr[it]>max){
            max=arr[it];
        }
       if(arr[it]<min){
            min=arr[it];
        }
        cout<<arr[it]<<"\t";
    }
     int num=max-min;
     sum+=num;
     cout<<"]";
    cout<<endl;
   
    printSubset(arr,i,j+1,size,sum);
  
}
int main() {
    // Write C++ code here
    int a[]={4,-2,-3,4,1};
    int sum=0;
    printSubset(a,0,0,5,sum);
    sum-=1;
    cout<<sum;
    return 0;
}