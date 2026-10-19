#include <iostream>
using namespace std;
int main(){
    double a=1000.0;
    double b=0.0001;
    float a_f=1000.0;
    float b_f=0.0001;

    float c1_f=(a_f+b_f)*(a_f+b_f);
    float c2_f=a_f*a_f+2.0*a_f*b_f;
    float c_f=c1_f-c2_f;
    float z_f=b_f*b_f;
    float result_f=c_f/z_f;

    double c1=(a+b)*(a+b);
    double c2=a*a+2.0*a*b;
    double c=c1-c2;
    double z=b*b;
    double result=c/z;

    cout<<"result float = "<<result_f<<endl;
    cout<<"result double = "<<result<<endl;

    return 0;
} 
