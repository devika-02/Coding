#include<bits/stdc++.h>
using namespace std;
//Find if given array is a subset of the above array with hashing
bool chkSubarray(int a[],int b[],int m,int n){
	set<int> chkdup;
	for(int i=0;i<m;i++){
		chkdup.insert(a[i]);
	}
	for(int i=0;i<n;i++){
		if(chkdup.find(b[i])==chkdup.end()){
			return false;
		}
	}
	return true;
}
int main(){
	int arr1[]={9,8,7,6,5};
	int arr2[]={3,4,5};
	int arr3[]={8,7,6};
	if(chkSubarray(arr1,arr2,7,3)){
		printf("\narr2 is a subset of arr1");
	}
	else{
	    printf("\narr2 is not a subset of array 1");
	}
	if(chkSubarray(arr1,arr3,7,3)){
		printf("\narr3 is a subset of arr1");
	}
		else{
	    printf("\narr3 is not a subset of array 1");
	}
	return 0;
}
