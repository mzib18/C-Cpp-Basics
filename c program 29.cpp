# include<stdio.h>
int main(void){
    char word[101];//one extra for null
    int n,i;
    scanf("%d%s",&n,word);
    for(i=0;i<n;i++){
        printf("%s\n",word);
    }
    return 0;
}
