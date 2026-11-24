#include <iostream>
using namespace std;
double square(double n){
    return n*n;
}
int main(){
    double num;
    cout<<"Enter the number:";
    cin>>num;

    cout<<"squre of the number is:"<<square(num)<<endl;

    return 0;
}