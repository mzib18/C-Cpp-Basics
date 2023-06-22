# include<stdio.h>
int min(int,int);
int main(void){
    int i,j,n,read;
    scanf("%d",&n);
    int lst[n];
    for(i=0;i<n;i++){
      scanf("%d",&read);
      lst[i] = read;   
        
    }
    int leastoftwo = 0;
    int leastofall = 0;
    for(j=0;j<n-2;j++){
        leastoftwo=min(lst[j],lst[j+1]);
        leastofall=min(leastoftwo,min(lst[j+1],lst[j+2]));        
    }
    printf("%d",leastofall);
    return 0;
}
int min(int x,int y){
    
    if (x<y){
        return x;
    }else {
        return y;
    }
}    

