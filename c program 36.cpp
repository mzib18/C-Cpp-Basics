# include<stdio.h>
int main(void){
    char word[51];
    int i=0;
    int found = 0;
    int j= 0;
    scanf("%s",word);
    while(word[i]!='\0'){
        i++;
    } 
    
    if (i%2==0){
        while (word[j]!='\0')
        {    if(word[j]=='t'||word[j]=='T'){
                found = 1;
                if(j<i/2){
                    printf("1\n");
                }else{
                    printf("2\n");
                }
        
            }
            j++;
        }
            if (found==0){
                printf("-1\n");
            }

    }else{
        while (word[j]!='\0')
        {
            if(word[j]=='t'||word[j]=='T'){
                found = 1;
                if(j<(i/2)+1){
                    printf("1\n");
                }else{
                    printf("2\n");
                }
            }
            
            j++;
        }
        if (found ==0){
                printf("-1\n");
            }


        
    }
    
        
    
    
}
