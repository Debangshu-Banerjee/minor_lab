#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<double> coeff_1(11,0.0);
    vector<double> coeff_2(11,0.0);
    coeff_1[0]=1.0;
    coeff_2[1] =1.0;
    for(int k=2;k<=10;k++){
      int i=(k-1);  
      double a=(2.0*(double)i+1.0)/(double)(i+1);
      double b=(double)i/(double)(i+1);
      vector<double> temp(11,0.0);
     for(int j=0;j<=10;j++){
         if(j==0) temp[j]=-coeff_1[j]*b;
         else{
             temp[j]=a*coeff_2[j-1]-coeff_1[j]*b;
         }
     }
     coeff_1=coeff_2;
     coeff_2=temp;
    }
    for(int i=0;i<=10;i++){
        cout<<coeff_2[i]<<"   ";
    }
    cout<<endl;


}