# include<iostream>
# include<cmath>
using namespace std;
int quadratic(double a,double b,double c,double& outx1,double& outx2);
int linear(double a,double b,double& outx);
int main(){
	double a,b,c,x1,x2;
	cin>>a>>b>>c;
	switch(quadratic(a,b,c,x1,x2)){
		case 1:
			cout<<"two real soln are"<<x1<<" and "<<x2<<endl;break;
		case 2:
			cout<<"two real and equal soln are"<<x1<<" "<<x1<<endl;break;
		case 3:
			cout<<"the equation has no real soln"<<endl;break;
		case 4:
			cout<<"the equation has one and only reAL  soln"<<x1<<endl;break;
		case 5:
			cout<<"the equation has all real soln"<<endl;break;
		case 6:
		    cout<<" no soln possible"<<endl;break;	
		default:
		   cout<<"invalid input .please try again"<<endl;break;	
	}
	return 0;
}
int quadratic(double a,double b,double c,double& outx1,double& outx2){
	double delta;
	delta = b*b - 4*a*c;
	if (a!= 0.0){
	
	if(delta>0){
		double x1 = (-b + sqrt(delta))/2*a;
		double x2 = (-b - sqrt(delta))/2*a;
		outx1 = x1;
		outx2 = x2;
		return 1;

	}else if(delta ==0){
		double x1 = -b/2*a;
		outx1 = x1;
		return 2;
    }else {
        return 3;	
	}
	
  }else {
  	 return linear(b,c,outx1);
}
}
int linear(double a,double b,double& outx){
	double x;
	if(a!=0){
		x = -b/a;
		outx = x;
		return 4;
	}else if(a==0 && b==0){
		return 5;
	}else{
		return 6;
	}
}
	
	
	
	
	
	  

		
	
	
	
	
	
	



