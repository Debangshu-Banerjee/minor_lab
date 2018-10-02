#include<bits/stdc++.h>

using namespace std;

#define pb push_back

double cal(vector<double> &coeff,vector<double> &points,vector<double> &val,double p){
	double aa=(double)0.00;
	for(int i=0;i<11;i++){
		double x=(double)1.00;
		for(int j=0;j<11;j++){
			if(i==j) continue;	
			x=x*(p-points[j]);
		}
		
		x=x/coeff[i];
		//if(p==-5) cout<<x<<" "<<p<<endl;
		aa=aa+(x*val[i]);

	}
	return aa;
}

int main(){
	vector<double> coeff(10),points,val;
	for(int i=-5;i<=5;i++){
		points.pb((double)i);
		int z=1+(i*i);
		double e=(double)1/(double)z;
		val.pb(e);
	}	
	for(int i=0;i<11;i++){
		double x=(double)1.00;
		for(int j=0;j<11;j++){
			if(i==j) continue;
			x=x*(points[i]-points[j]);

		}
		coeff[i]=x;
		//cout<<x<<endl;
	}

	for(double i=-5.0;i<5.2;i=i+0.2){
		double z=1+(i*i);
		double e=(double)1/(double)z;
		
		cout<<i<<" "<<cal(coeff,points,val,i)<<" "<<e<<endl;
	}


}
