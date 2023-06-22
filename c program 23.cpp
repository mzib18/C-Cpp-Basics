# include<stdio.h>
int main(void){
    int numcity,popcity,i,count;
    count = 0;
    scanf("%d",&numcity);
    for(i=0;i<numcity;i++){
        scanf("%d",&popcity);
        if(popcity>10000){
            count = count + 1;
        }
    }
    printf("%d",count);
    return 0;
}
