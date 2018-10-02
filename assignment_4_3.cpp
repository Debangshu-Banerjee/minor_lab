#include<bits/stdc++.h>

using namespace std;

int main(){

double d=(double)-1;
	vector<double> v1,v2;
	vector<double> a,a1;	
	double err,err1;
	int i=0;
	double precision = (double)pow(10,-6);
	while(1){
		double temp;
		temp=(d-1.0)*(d-6.0)*(d-8.0);
		double t1=(d-1.0)*(d-6.0)+(d-8.0)*(d-6.0)+(d-1.0)*(d-8.0);
		temp=temp/t1;
		//temp=temp/(exp(d)-(double)1);
		temp=d-temp;
        	err=d-temp;
		if(err<0) err=-err;
		d=temp;i++;
		if(d<1.0) err1=1-d;
		else err1=d-1;
		//cout<<i<<" "<<d<<endl;
		v1.push_back(err1);
		if(err<precision) break;
	}
	int l=(int)v1.size();
	for(int i=0;i<=l-3;i++){
		double t=(double)log(v1[i+2]/v1[i+1]);
		if(log((v1[i+1])/(v1[i])) == 0.00) break;
		t=(double)t/(double)log((v1[i+1])/(v1[i]));
		cout<<fixed;
		cout<<setprecision(7);
		a.push_back(t);
		//cout<<setw(4)<<(i+1)<<" "<<setw(12)<<t<<" "<<endl;

	}
	double d1=(double)1.5;
	double d2=(double)(0.5);

i=0;
while(1){
	double t1=d1;
	double t2=d2;
	double t3=(d1-1.0)*(d1-6.0)*(d1-8.0);
	double t4=(d2-1.0)*(d2-6.0)*(d2-8.0);
	double t5=(d1*t4-d2*t3)/(t4-t3);
	d1=d2;
	d2=t5;
        err=d2-d1;
	if(err<0) err=-err;
	i++;
	//cout<<i<<" "<<d2<<endl;
	if(d1<1.0) err1=1-d1;
	else err1=d1-1;
	v2.push_back(err1);
	if(err<precision) break;
}  
	int l1=(int)v2.size();

	for(int i=0;i<=l1-3;i++){
		double t=(double)log(v2[i+2]/v2[i+1]);
		t=(double)t/(double)log((v2[i+1])/(v2[i]));
		cout<<fixed;
		cout<<setprecision(7);
		a1.push_back(t);
		//cout<<setw(4)<<(i+1)<<" "<<setw(12)<<t<<" "<<endl;

	}
	cout<<"1 st column no of iterations"<<endl;
	cout<<"2 nd column Newton's method"<<endl;
	cout<<"3 rd column Secant method"<<endl;
	l=max(l1-2,l-2);

		for(int i=0;i<l;i++){
			cout<<setw(4)<<(i+1)<<" ";
			if(i<(int)a.size()) cout<<setw(12)<<a[i]<<" ";
			if(i<(int)a1.size()) cout<<setw(12)<<a1[i]<<" ";
			cout<<endl;	



		}












}
