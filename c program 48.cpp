# include<stdio.h>
int charsize(int);
int doublesize(int);
int intsize(int);
int main(void){
    int i,n,lenght;
    int mem1=0;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&lenght,&c);
        if (c=='i'){
            mem1=mem1+intsize(lenght);
        }
        else if(c=='d'){
            mem1 = mem1+doublesize(lenght);
        }else if(c=='c'){
            mem1 = mem1 +charsize(lenght);
        }else{
            printf("invalid tracking code type");
            return 0;
        }
    }
    printf("%d bytes",mem1);
    return 0;
}
int charsize(int lenght){
    return lenght*1;
}
int intsize(int lenght){
    return lenght*4;
}
int doublesize(int lenght){
    return lenght*8;
}









