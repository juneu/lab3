#include <iostream>
#include <complex>

using namespace std;

int main(){
  
  complex<double> z, zneu;
  int N=100;
  
  for(double re=-2; re<=2; re+=0.01){
    
    for(double im=-2; im<=2; im+=0.01){
      z=complex<double>(re, im); 
     
      int n;
      for(n=1; n<30;n++){
	zneu=z-(z*z*z-1.0)/(3.0*z*z);
	if (abs(zneu-z)<1e-8) break;
	z=zneu;
      }
      cout<<re<<"\t"<<im<<"\t"<<n<<endl;
    }
  }

  return 0;
}