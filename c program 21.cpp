# include<stdio.h>
int main(void){
    int number,i,j;
    double weight,sum,avg;
    sum = 0;
    scanf("%d",&number);
    double array[number];
    for(i=0;i<number;i++){
        scanf("%lf",&weight);
        array[i]= weight;
        sum = sum + array[i];
    }
    avg = sum/number;

    for(j=0;j<number;j++){
        printf("%.1lf\n",avg-array[j]);
    }
    return 0;
}
