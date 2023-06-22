# include<stdio.h>
int main(void){
    int n,guess;
    int counter = 0;
    scanf("%d",&n);
    while(guess!=n){
        scanf("%d",&guess);
        if(guess>n){
            printf("it is less\n");
            counter = counter+1;
        }else if(guess<n){
            printf("it is more\n");
            counter = counter + 1;
        }
        
    }
    printf("Number of tries needed:\n%d",counter+1);
        
}
