#include<bits/stdc++.h>


using namespace std;


int main(){
	double d=(double)3.1415/(double)(4);
	vector<double> v1,v2;
	vector<double> a,a1;	
	double err,err1;
	int i=0;
	double precision = (double)pow(10,-6);
	while(1){
		double temp;
		temp=d-cos(d);	
		temp=temp/(1-sin(d));
		temp=d-temp;
        	err=d-temp;
		if(err<0) err=-err;
		d=temp;i++;
		if(d<0) err1=-d;
		else err1=d;
		//cout<<i<<" "<<d<<endl;
		v1.push_back(err);
		if(err<precision) break;
	}
	int l=(int)v1.size();
	for(int i=0;i<=l-3;i++){
		double t=(double)log(v1[i+2]/v1[i+1]);
		t=(double)t/(double)log((v1[i+1])/(v1[i]));
		cout<<fixed;
		cout<<setprecision(7);
		a.push_back(t);
		cout<<setw(4)<<(i+1)<<" "<<setw(12)<<t<<" "<<endl;

	}

}
