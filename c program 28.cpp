# include<stdio.h>
int main(void){
    int min,max,temp;
    scanf("%d%d",&min,&max);
    scanf("%d",&temp);
    while(temp!=-999){
        if(temp>=min && temp<=max){
            printf("Nothing to report\n");


            scanf("%d",&temp);

        }else{
            printf("Alert!\n");
            temp = -999;
        }
    }
    return 0;
    
}
