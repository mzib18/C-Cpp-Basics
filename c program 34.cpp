# include<stdio.h>
int main(void){
    
    char word[101];
    int j,l,n;
    int max =0;

    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%s",word);
        l=0;
        while(word[l]!='\0'){
            l++;
        }
        if(l>max){
            max = l;
        }
    }
    printf("%d",max);
    return 0;
}
