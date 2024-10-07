#include<iostream>
using namespace std;
bool isEven(){
    int a;
    cout<<"Enter the Number:"<<endl;
    cin>>a;
    bool ans;
    if(a%2==0){
        ans = true;
    }
        return ans;
}
int main(){
    bool ans = isEven();
    if(ans== true)
        cout<<"even";
        else
            cout<<"odd";

    }
