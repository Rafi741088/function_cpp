#include <iostream>
using namespace std;
double add(double a ,double b){
    return a+b;
}
double sub(double a,double b){
    return a-b;
}
double mul(double a ,double b){
    return a*b;
}
double div(double a,double b){
    return a/b;
}
int main(){
    double num1,num2;
    cout<<"Enter the frist number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;
    cout<<"addition:"<<add(num1,num2)<<endl;
    cout<<"subtraction:"<<sub(num1,num2)<<endl;
    cout<<"multiplication:"<<mul(num1,num2)<<endl;
    if(num2!=0){
        cout<<"division:"<<div(num1,num2)<<endl;
    }
    else{
        cout<<"division by zero is not possible"<<endl; 
    }
    return 0;
    
}