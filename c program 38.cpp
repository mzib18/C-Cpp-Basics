# include<stdio.h>
int main(void){
	// sorting in ascending order
	int lst[] = {33,41,0,4,-2,5676,-19191,10001,232222};
	int n = 9;
	int swap,i,j,t;
	for (j=0;j<n-1;j++){
		for(i=0;i<n-1;i++){
			if (lst[i]>lst[i+1]){
				swap = lst[i];
				lst[i] = lst[i+1];
				lst[i+1] = swap;
			}
		}
	}
	for(t-0;t<n;t++){
		printf("%d\n",lst[t]);
	}
	return 0;
}
