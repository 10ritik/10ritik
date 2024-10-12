#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number"<< endl;
    cin >> n;
    int i = 1;
    int j = 0;
    while (i <= n){
            j = 0;
        while(j < i){
            cout << "* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
