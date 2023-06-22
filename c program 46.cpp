# include<stdio.h>
int digits(int n);
int main(void){
    int n;
    int sum = 0;
    scanf("%d",&n);
    if (n<=0){
        printf("wrong input");
    }else{
        sum = digits(n);
        printf("%d",sum);
    }
    return 0;
}
int digits(int n){
    int d ;
    if (n/10==0){
        return n%10; 
    }else{
        d = n%10;
        d = d + digits(n/10);
        return d;
    }
    
}
