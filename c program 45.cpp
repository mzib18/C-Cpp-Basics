# include<stdio.h>
int fabonacci(int);//0,1,1,2,3,5,8,13,21,34,55,89
int main(void){
	int n,series;
	scanf("%d",&n);
	if (n<0){
		printf("invalid number");
	}else{
		series = fabonacci(n);
		printf("%d",series);
	}
}
int  fabonacci(int n){
	if (n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else{
		return fabonacci(n-1)+fabonacci(n-2);
	}
}
