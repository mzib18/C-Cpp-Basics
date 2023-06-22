# include<stdio.h>
int min(int,int);
int fun(int*,int,int,int);
int main(void){
    int i,j,n,read;
    scanf("%d",&n);
    int lst[n];
    for(i=0;i<n;i++){
      scanf("%d",&read);
      lst[i] = read;   
    }
    int least = lst[0];
    if(n<=1)
    printf("%d",least);
    else
    {
    	printf("%d",fun(lst,least,1,n));
    }
    return 0;
}
int min(int x,int y){
    int result;
    if (x<y){
        result = x;
    }else {
        result = y;
    }return result;
}
int fun(int* lst,int least,int idx,int n)
{
	if(idx==n)
		return least;
	
	least=min(least,lst[idx]);
	
	return fun(lst,least,idx+1,n);
}






