#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if(arr[j]>arr[j+1])
			   swap(arr[j],arr[j+1]);
		}
	}
}
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int size = 10;
	int arr[size] = {999,-99,1,2,44,0,-1,17,9,9};
	bubblesort(arr,size);
	cout<<"sorted array"<<endl;
	printarray(arr,size);
	return 0;
}
