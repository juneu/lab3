#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

complex<double> zberechnen(double phi);

int main(){
  int N=100;

  complex<double> z[N];
  double dphi=2*M_PI/(N-1);
   
    for (int i=0; i<N;i++){
      double phi=i*dphi-M_PI;
     z[i]=zberechnen(phi); 
    }
   
   for (int i=0; i<N;i++){
    cout <<i*dphi-M_PI<<"\t"<<real(z[i])<<"\t"<<imag(z[i])<<"\t"<<abs(z[i])<< endl;
	}

  return 0;
}

complex<double> zberechnen(double phi){
  complex<double>ii=complex<double>(0, 1);
  complex<double>z=tan(phi*(1.0+ii));
  return z;
  
}
