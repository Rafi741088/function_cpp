#include <iostream>
using namespace std;
bool isEven(int n){
    
 return n%2==0; 
    
}
int main(){
    int num;
    cout <<"Enter the number:";
    cin>>num;
    if(isEven(num)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl ;
    }
    return 0;
}