#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){
  int N=100;

  complex<double> z[N];
  double dphi=2*M_PI/(N-1);
   
    for (int i=0; i<N;i++){
     z[i]=complex<double>(cos(i*dphi), sin(i*dphi)); 
    }
   
   for (int i=0; i<N;i++){
    cout <<i*dphi<<"\t"<<real(z[i])<<"\t"<<imag(z[i])<<"\t"<<abs(z[i])<< endl;
	}

  return 0;
}
