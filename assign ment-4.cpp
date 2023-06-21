# include<stdio.h>
int main(void){
	int array[3] = {2,4,8};
	printf("%p\n",(array+1));
	printf("%d\n",*(array+1));
	return 0;
}
