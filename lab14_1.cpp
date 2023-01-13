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

void stat(const double a[],int n,double b[])
{
    double sum,max,min,dev,mul;
    int i;
    for(i=0;i<n;i++) sum += a[i];
    b[0] = sum/n;

    dev = 0;
    for(i=0;i<n;i++) dev += pow((a[i]-b[0]),2);
    b[1] = sqrt(dev/n);

    mul = 1;
    for(i=0;i<n;i++) mul = mul*a[i];
    b[2] = pow(mul,(1.0/n));

    sum = 0;
    for(i=0;i<n;i++) sum += (1/a[i]);
    b[3] = n/sum;

    max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max) max = a[i];
    }
    b[4] = max;
    
    min=a[1];
    for(i=0;i<n;i++)
    {
        if(a[i]<min) min = a[i];
    }
    b[5] = min;

}