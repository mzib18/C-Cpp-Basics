# include<stdio.h>
int main(void){
	int salesamount;
	double incentive;
	scanf("%d",&salesamount);//the user enters the sales amount of the employee
	if (salesamount<5000){
		incentive = (10* salesamount)/100;
	}else if(salesamount>=5000 &&salesamount<15000){
		incentive = (20* salesamount)/100;
    }else if(salesamount>=15000&& salesamount<25000){
    	incentive = (25*salesamount)/100;
	}else{
		printf("invalid input");
	}
	printf("%lf",incentive);
	return 0;
}
