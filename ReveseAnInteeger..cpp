#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Digit:"<<endl;
    cin>>n;
    int rev = 0;
    while (n!=0){
        int digit = n%10;
        rev =(rev * 10 ) + digit;
        n=n/10;
    }
    cout<<rev<<endl;
}
