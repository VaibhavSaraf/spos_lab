#include<bits/stdc++.h>
using namespace std;
void func(int * tree,int arr[],int start ,int end,int pos)
{
	if(start==end)
	{
		 tree[pos]=arr[start];
		 return;
	}
	     int mid=(start+end)/2;
	     func(tree,arr,start,mid,2*pos);
		 func(tree,arr,mid+1,end,2*pos+1);


	    	tree[pos]=min(tree[2*pos],tree[2*pos+1]);



}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l;
	l=pow(2,ceil(log2(n)))-1;
	cout<<l<<endl;
     int * tree=new int[l];
     func(tree,arr,0,n-1,1);

     for(int i=1;i<l;i++)
     {
         cout<<tree[i]<<'\t';
     }
	return 0;
}