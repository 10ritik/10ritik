#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    int count=0;
    int i = 1;
    while(i<=n){
        int j = 1;
            while (j<=n){
            count++;
            char ch = 'A'+count-1;
            cout<<ch<<" ";
            j++;
        }
            cout<<endl;
            i++;
    }
}
