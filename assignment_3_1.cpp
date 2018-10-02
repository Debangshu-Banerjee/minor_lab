#include<bits/stdc++.h>

using namespace std;

int main(){

double d=(double)0.1;

vector<double> v1,v2,v3;

double err;
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
	//cout<<i<<" "<<d<<endl;
	v1.push_back(d);
	if(err<precision) break;
}

double d1=(double)0.1;
double d2=(double)(-0.1);

i=0;
while(1){
	double t1=d1;
	double t2=d2;
	double t3=exp(d1)-d1-1;
	double t4=exp(d2)-d2-1;
	double t5=(d1*t4-d2*t3)/(t4-t3);
	d1=d2;
	d2=t5;
        err=d2-d1;
	if(err<0) err=-err;
	i++;
	//cout<<i<<" "<<d2<<endl;
	v2.push_back(d2);
	if(err<precision) break;
}  
i=0;
d2=(double)0.1;
d1=(double)-0.3;

while(1){
	double t1=d1;
	double t2=d2;
	double mid=(d2+d1)/(double)2.0;
   	err=d2-d1;
	if(err<0) err=-err;	
	if(err<precision) break;
	if((exp(mid)-1)>0) d2=mid;
	else d1=mid;
	i++;
	//cout<<i<<" "<<mid<<endl;
	v3.push_back(mid);
}  
int l1=(int)v1.size();int l2=(int)v2.size();int l3=(int)v3.size();

int l=max(l1,max(l2,l3));
cout<<"col 1"<<" --> "<<"Newton's method"<<endl;
cout<<"col 2"<<" --> "<<"Secant method"<<endl;
cout<<"col 3"<<" --> "<<"Bisection method"<<endl;
for(int i=0;i<l;i++){
	cout<< fixed;
	cout<< setprecision(7);
	if(i>=10)cout<<(i+1)<<setw(3)<<" ";
	else cout<<i<<setw(4)<<" ";
	if(i<l1) cout<<v1[i]<<setw(3)<<" ";
	else cout<<setw(12)<<" ";
	if(i<l2) cout<<v2[i]<<setw(3)<<" ";
	else cout<<setw(12)<<" ";
	if(i<l3) cout<<v3[i]<<setw(3)<<" ";
	else cout<<setw(12)<<" ";
	cout<<endl;

}


}
