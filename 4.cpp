#include<bits/stdc++.h>

using namespace std;

double cal (double x){
    double temp= (double)exp(2.0*x)*(double)sin(3.0*x);
    return temp;
}
double intr(double a,double b){
    double mid=(a+b)/(double)2.0;
    double temp= cal(a)+(double)4.0*cal(mid)+cal(b);
    temp=temp*(b-a)/(double)6.0;
    return temp;
}

double get_intr(double a,double b,double tol,int *step){
     double mid=(a+b)/(double)2.0;
     *step= *step + 1;
     cout<<mid<<" "<<0<<endl;
    //cout<<*step<<endl;
        double s1=intr(a,b);
        double s2= intr(a,mid) + intr(mid,b);
        double eff_tol = (double)10.0* tol;
    double err=abs(s2-s1);
    double new_tol = tol/(double)2.0;
     
    if(err  < eff_tol) return s2;
    else{
        double x1=get_intr(a,mid,new_tol,step);
        double x2=get_intr(mid,b,new_tol,step);
        return (x1+x2);
    }
}


int main(){

    int step =0;
    double tol=1.0e-5;
    get_intr(1.0,3.0,tol,&step);
    //cout<<step<<" ";
}