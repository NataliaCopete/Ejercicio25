#include <iostream>
#include <math.h>
#include <cstdlib>
#include <random>
#include <cmath>
#include <ctime>

using std::cout;
using std::endl;

const double pi=acos(-1);

double gauss(double x, double mu, double sigma){

return 1/(sqrt(2*pi)*sigma)*exp(-pow(x-mu,2)/(2*sigma*sigma));

}


int main(int argc,char* argv[]){

int N=atoi(argv[1]);
double mu=atof(argv[2]);
double sigma=atof(argv[3]);

std::default_random_engine generator(time(0));
std::normal_distribution<double> dis(mu,sigma);

double* gaussiana=new double[N];

for (int i=0; i<N;i++){
gaussiana[i]=dis(generator);
}

for (int i=0; i<N;i++){
cout<<gaussiana[i]<<endl;
}

return 0; 
}
