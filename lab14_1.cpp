#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[6]){
    double sum=0;
    double sim=0;
    double sam=1;
    double sumi=0;
    double min=500,max=1;
    for(int i=0;i<N;i++){
     sum+=A[i];
     sim+=pow(A[i],2);
    }
     B[0]=sum/N;
    double simi=pow(B[0],2);

    B[1]=pow((sim/N-simi),0.5);
      
    for(int j=0;j<N;j++){
        sam*=A[j];
    }  
    B[2]=pow(sam,1.0/N);
   
    for(int k=0;k<N;k++){
       sumi=sumi+1/A[k];
    }
    B[3]=N/sumi;
    
    for(int z=0;z<N;z++){
        if(A[z]>max){
            max=A[z];
             
             
             }
        if(A[z]<min){
             min=A[z];
             
             }
    }
     B[4]=max;
     B[5]=min;
    

}
