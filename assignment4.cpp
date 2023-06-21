#include<iostream>
using namespace std;
class time{
	private:
		int hour;
		int minute;
		double second;
	public:
		int GetHour(){
			return hour;
		}	
		int Getminute(){
			return minute;
		}
		double Getsecond(){
			return second;
		}
		void read(){
			cout<<"please enter time in  hour, minutes and second "<<endl;
			cin>>hour>>minute>>second;
		}
		void display(){
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
		double add(){
			double ttime;
			ttime = hour*3600 + minute*60 + second;
			return ttime;
		}
};
int main(){
time a;
double ttime;
a.read();
a.display();
ttime = a.add();	
cout<<"total time in second "<<ttime<<endl;
return 0;	
}
