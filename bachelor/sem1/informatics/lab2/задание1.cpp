#include <iostream>
using namespace std;
int main(){
    int s=0;
    for (int i=3;i<200;i+=3){
        s+=i;
    }
    cout<<"result = "<<s<<endl;
    return 0;
}
