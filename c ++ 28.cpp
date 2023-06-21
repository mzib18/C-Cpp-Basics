# include<iostream>
using namespace std;
void swap(int* xp,int* yp ){
	int temp = *xp;
	*xp = *yp;
	*yp == temp;
}
int indexOfMin(int arr[],int low,int high){
	int min,minInd;
	min = arr[low];
	minInd = low;
	for(int i=low+1;i<=high;i++){
		if(arr[i]<min){
			min = arr[i];
			minInd = i;
		}
		  
	}
	return minInd;
}
void selectionSort(int arr[],int size){
	int i,minInd;
	for(i=0;i<size;i++){
		minInd = indexOfMin(arr,i,size-1);
		swap(&arr[i],&arr[minInd]);
	}
}
void  printarray(int arr[],int size){
	for(int i=0;i<size;i++)
	  cout<<arr[i]<<endl;
}


int main(){
	int arr[] = {3,4,2,2,67,1,0,10};
    selectionSort(arr,8);
    cout<<"sorted srray\n";
    printarray(arr,8);
	return 0;
}
