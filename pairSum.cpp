#include<iostream>
using namespace std;
void pairSum(int arr[], int s){
    int n = 9;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if(arr[i]+arr[j] == s){
               cout<<arr[j]<<" "<<arr[i]<<endl;
            }
        }
    }
}
int main(){
        int arr[9]={1,2,3,4,5,6,9,4,8};
        pairSum(arr,10);
}
