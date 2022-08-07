#include<stdio.h>
#include<stdlib.h>
//one way to print the middle element of a ll using C
struct link{

	int data;
	struct link* addr;
};
struct link* createNode(int data,struct link* nxt){
struct link* temp=(struct link*)malloc(sizeof(struct link));
temp->data=data;
temp->addr=nxt;
return temp;
}
int traverse(struct link* l,int n){
	int count=0;int a[n];
	while(l->addr){
		count++;
		a[count]=l->data;
		//printf("%d\n",l->data );
		l=l->addr;
	}
	if(count%2!=0)
		return(a[(count/2)+1]);
	else
		return(a[count/2]);
	
}
int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	struct link*temp=(struct link*)malloc(sizeof(struct link));
	for(int i=0;i<n;i++){
		int num;
		printf("Enter element:");
		scanf("%d",&num);
		temp=createNode(num,temp);
	}
	printf("%d",traverse(temp,n));
	return 0;
}
