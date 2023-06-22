# include<stdio.h>
int sum(int,int);// Function prototype
int main(void){
	int a,b;
	int result;
	scanf("%d%d",&a,&b);
	result = sum(a,b);// function calling with passing arguments a,b
	printf("%d",result);
	return 0;
}
int sum(int x,int y){// defining function with parameters
	int compute;
	compute = x+y;
	return compute;
}
