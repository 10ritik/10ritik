#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    bool isPrime = 1;
    for (int i = 2; i<n; i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1){
        cout<<"It is a Prime Number";
    }
    else{
        cout<<"it is not a Prime Number";
    }
}


