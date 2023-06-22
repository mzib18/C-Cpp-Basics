# include<stdio.h>
double tofeet(double val);
double tofarenheight(double val);
double topounds(double val);
int main(void){
    int n;
    int i = 0;
    double val,result;
    char u;
    scanf("%d",&n);
    scanf("%lf %c",&val,&u);
    while (i<n){
        if(u == 'm'){
            result = tofeet(val);
            printf("%lf ft",result);
            printf("\n");
        }
        else if(u=='c'){
            result = tofarenheight(val);
            printf("%lf f",result);
            printf("\n");
        }
        else {
            result = topounds(val);
            printf("%lf lbs",result);
            printf("\n");
        }
        scanf("%lf %c",&val,&u);

        i++;
    }
    return 0;
}
double  tofeet(double val)
{
    double feet;
    feet = val * 3.2808;
    return feet;
}
double   tofarenheight(double val)
{
    double fr;
    fr = 32 + 1.8*val;
    return fr;
}
double    topounds(double val)
{
    double pound;
    pound = val * 0.002205;
    return pound;
}

