# include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int val){
	int low=0;
	int high = size-1;
	bool found = false;
	while(found==false && low<=high){
		int mid = (high + low)/2;
		if (arr[mid]==val){
		   found = true;
		   return mid;}
		else if(arr[mid]>val)
		   high = mid-1;
		else
		    low = mid+1;   
	}
	if (found == false)
	   return -1;
}
int main(){
	int arr[] = {2,4,6,8,9,10,45,67};
	int i= binarysearch(arr,8,66);
	if(i==-1)
	  cout<<"the element not found : -1"<<endl;
	else
	  cout<<"the element is found at index : "<<i<<endl;
	return 0;    
}
