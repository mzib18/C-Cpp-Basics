# include<stdio.h>
int factorial(int);
int main(void){
	int n,facto;
	scanf("%d",&n);
	if (n<0){
		printf("invalid number");
	}else {
		facto = factorial(n);
		printf("%d",facto);
	}
	return 0;
}
int factorial(int n){
	if (n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
