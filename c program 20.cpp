# include<stdio.h>
int main(void){
    int array[10];
    int cell = 0;
    int readvalue,idnumber;
    int i;
    
    for(i=0;i<10;i++){
        scanf("%d",&readvalue);
        
        array[cell] = readvalue;
        cell = cell + 1;
        
    }
        scanf("%d",&idnumber);

        
        printf("%d",array[idnumber]);

    
    
    
        return 0;
    
    
}
