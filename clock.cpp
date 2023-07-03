#include<iostream>
#include<windows.h>

using namespace std;

int main(){
	int h,m,s,a,err;
	err=a=0;
	while(err == 0){
		cout<<"Enter Hour :"<<endl;
		cin>>h;
		cout<<"Enter Minute :"<<endl;
		cin>>m;
		cout<<"Enter Second :"<<endl;
		cin>>s;
		if(h<24 && m<60 && s<60)
			err++;
		else
			system("cls");
	}
	
	while(a == 0){
		system("cls");
		if(h<12)
			cout<<h<<":"<<m<<":"<<s<<"AM"<<endl;
		if(h>11)
			cout<<h<<":"<<m<<":"<<s<<"PM"<<endl;
		Sleep(1000);
		s++;
		if(s>59){
			s = 0;
			m++;
		}
		if(m>59){
			m = 0;
			h++;
		}
		if(h>24){
			h = 0;
		}
	}
	
	return 0;
}