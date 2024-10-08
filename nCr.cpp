#include<iostream>
using namespace std;
int factorial (int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
       fact = fact * i;
    }
    return fact;
}
int nCr(){
    //function body
    int n,  r;
    cout<<"Enter Digit 1:"<<endl;
    cin>>n;
    cout<<"Enter Digit 2:"<<endl;
    cin>>r;
    int ncr=(factorial(n))/(factorial(r)*factorial(n-r));
    return ncr;
    }
    int main(){
        //function call
        int ans = nCr();
        cout<<"nCr of two digits are: "<<ans;
    }


