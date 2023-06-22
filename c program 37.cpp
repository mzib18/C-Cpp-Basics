# include<stdio.h>
int main(void){
	int lst[] = {0,27,82,84,91,121,124,456};
	int n = 8;
	int item;
	scanf("%d",&item);
	int it,ib,mid;
	it = n-1;
	ib = 0;
	mid = 0;
	int found = 0;
	while(!found&&(ib<=it)){
		mid = (ib+it)/2;
		if (item == lst[mid]){
			found = 1;
		}else if (item < lst[mid]){
			it = mid-1;
		}else{
			ib = mid +1;
		}
	}
	if (!found){
		printf("we cant find %d in given list",item);
		
	}else{
		printf("%d is found at %d",item,mid);
	}
	return 0;
}
