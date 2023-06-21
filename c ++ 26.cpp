# include<iostream>
using namespace std;
double* getDoubles(int numDoubles){
	double *temp = new double[numDoubles];
	int j=0;
	for(int i=1;i<=numDoubles;i++){
	
	  temp[j] = (i/3.0);
	  j++;
    }
	return temp;  
}
int main(){
	int numDoubles;
	cin>>numDoubles;
	double *arr =getDoubles(numDoubles);
	for(int i=0;i<numDoubles;i++)
	   cout<<arr[i]<<endl;
	return 0;   
}
