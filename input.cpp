#include <iostream>
using namespace std;

int add(int a ,int b){
    return a+b;
}

int main (){
    int num1,num2;
    cout<<"Enter frist numbers:"<<endl;
    cin>>num1;
    cout<<"Enter second numbers:"<<endl;
    cin>>num2;
    int result=add(num1,num2);
    cout<<"result:"<<result<<endl;

    return 0;
}