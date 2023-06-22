# include<stdio.h>
int main(void){
    int n,i;
    scanf("%d",&n);
    char firstnam[101];
    char lastnam[101];
    for(i=0;i<n;i++){
        scanf("%s%s",firstnam,lastnam);
        printf("%s %s\n",lastnam,firstnam);
    }
    return 0;
}// '\0' stops the execution of statement at that point
