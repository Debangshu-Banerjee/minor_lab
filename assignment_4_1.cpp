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
		temp=exp(d)-d-(double)1;	
		temp=temp/(exp(d)-(double)1);
		temp=d-temp;
        	err=d-temp;
		if(err<0) err=-err;
		d=temp;i++;
		if(d<0) err1=-d;
		else err1=d;
		//cout<<i<<" "<<d<<endl;
		v1.push_back(err1);
		if(err<precision) break;
	}
	int l=(int)v1.size();
	for(int i=0;i<=l-3;i++){
		double t=(double)log(v1[i+2]/v1[i+1]);
		t=(double)t/(double)log((v1[i+1])/(v1[i]));
		cout<<fixed;
		cout<<setprecision(7);
		a.push_back(t);
		//cout<<setw(4)<<(i+1)<<" "<<setw(12)<<t<<" "<<endl;

	}
	d=(double)-1;
	while(1){
		double t1,t2,t3,temp;
		t1=exp(d)-d-(double)1;
		t2=exp(d)-(double)1;
		t3=exp(d);
		temp=(t1*t2)/((t2*t2)-(t1*t3));
		temp=d-temp;
        	err=d-temp;
		if(err<0) err=-err;
		d=temp;i++;
		if(d<0) err1=-d;
		else err1=d;
		//cout<<i<<" "<<d<<endl;
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
	cout<<"3 rd column Modified Newton's method"<<endl;
	l=max(l1-2,l-2);

		for(int i=0;i<l;i++){
			cout<<setw(4)<<(i+1)<<" ";
			if(i<(int)a.size()) cout<<setw(12)<<a[i]<<" ";
			if(i<(int)a1.size()) cout<<setw(12)<<a1[i]<<" ";
			cout<<endl;	



		}




}
