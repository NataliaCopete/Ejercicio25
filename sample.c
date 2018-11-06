#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <ctime>

using std::cout;
using std::endl;

const double pi=acos(-1);

double gauss(double x,double mu, double sigma){


return 1/(sqrt(2*pi)*sigma)*exp(-pow(x-mu,2)/(2*sigma*sigma));

}

int main(int argc,char* argv[]){

srand(time(0));

int N=atoi(argv[1]);
double mu=atof(argv[2]);
double sigma=atof(argv[3]);

double fMin=mu-4*sigma;
double fMax=mu+4*sigma;
/*double max=gauss(mu,mu,sigma);*/
double* gaussiana=new double[N];
int cont=0;
gaussiana[0]=mu-sigma;

while(cont<N){

double f=(double)rand() / (double)RAND_MAX;
double propuesta=fMin + f * (fMax - fMin);
double F=gauss(propuesta,mu,sigma)/gauss(gaussiana[cont],mu,sigma);
if (F>1){
gaussiana[cont+1]=propuesta;
cont=cont+1;

}

else{
double r=(double)rand() / (double)RAND_MAX;
if(r<F){
gaussiana[cont+1]=propuesta;
cont=cont+1;
}

else{
gaussiana[cont+1]=gaussiana[cont];
cont=cont+1;
}
}
}

for (int i=0; i<N;i++){
cout<<gaussiana[i]<<endl;
}

return 0; 
}
